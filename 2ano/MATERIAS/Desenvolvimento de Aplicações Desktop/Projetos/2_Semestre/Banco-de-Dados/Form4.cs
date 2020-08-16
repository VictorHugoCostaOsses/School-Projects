using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BandoDeDados
{
    public partial class Form4 : Form
    {
        int m = 0;
        int status = 0;
        int idPalestra,ra;
        string hora;
        MySqlConnection con;
        public Form4()
        {
            InitializeComponent();
            try
            {
                con = new MySqlConnection("server=143.106.241.3;port=3306;User ID=cl18152;database=cl18152;password=cl*07062002");
                MessageBox.Show("Conectado com sucesso!");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }
            this.WindowState = FormWindowState.Maximized;
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {
            

        }

        private void Form4_Load(object sender, EventArgs e)
        {

           
            try 
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select nomePalestra from Palestrantes",con);
                MySqlCommand busca_aluno = new MySqlCommand("Select nomeAlunos from Alunos");
                MySqlDataReader resultado = busca_palestra.ExecuteReader();
               

                while (resultado.Read())
                {
                    comboBox1.Items.Add(resultado["nomePalestra"].ToString());
                }

            }
            catch(Exception EX)
            {
                MessageBox.Show(EX.ToString());
            }
            finally
            {
                con.Close();
            }

         }

        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(textBox2.Text != "" &&  comboBox1.Text != "")
            { 
            if((Keys)e.KeyChar == Keys.Enter)
            {
                try
                {
                    con.Open();
                    MySqlCommand busca_ra = new MySqlCommand("Select nomeAlunos, idAlunos, Imagem from Alunos where idAlunos =" + textBox2.Text, con);
                    MySqlDataReader resultado = busca_ra.ExecuteReader();

                    if (resultado.Read())
                    {
                        label3.Text = resultado["nomeAlunos"].ToString();
                        ra = Convert.ToInt32(resultado["idAlunos"].ToString());

                        try
                        {
                            string imagem = Convert.ToString(DateTime.Now.ToFileTime());
                            byte[] bimage = (byte[])resultado["Imagem"];
                            FileStream fs = new FileStream(imagem, FileMode.CreateNew, FileAccess.Write);
                            fs.Write(bimage, 0, bimage.Length - 1);
                            fs.Close();
                            pictureBox1.Image = Image.FromFile(imagem);
                            resultado.Close();
                        }

                        catch
                        {
                            pictureBox1.Image = Image.FromFile("reprovado.png");
                        }

                        finally
                        {
                            con.Close();
                        }


                        con.Open();
                        MySqlCommand consulta = new MySqlCommand("Select idPalestranta,hora from Palestrantes where nomePalestra='" + comboBox1.Text + "'", con);
                        MySqlDataReader result1 = consulta.ExecuteReader();
                        result1.Read();
                        idPalestra = Convert.ToInt32(result1["idPalestranta"].ToString());
                        hora = result1["hora"].ToString();
                        con.Close();
                        con.Open();

                        MySqlCommand status_busca = new MySqlCommand("Select Status from Alunos where idAlunos=" + textBox2.Text, con);
                        MySqlDataReader result4 = status_busca.ExecuteReader();

                        if (result4.Read())
                        {
                            status = Convert.ToInt32(result4["Status"].ToString());
                        }
                        con.Close();

                        con.Open();

                        MySqlCommand consulta2 = new MySqlCommand("Select idPresença from Presença where idPalestra=" + idPalestra + " and RA=" + ra + " and Hora='" + hora + "'", con);
                        MySqlDataReader resultado2 = consulta2.ExecuteReader();
                      
                       if(resultado2.Read() == false && status != 1)
                        {
                        con.Close();
                        try
                        {
 
                         con.Open();
                         MySqlCommand insere = new MySqlCommand("insert into Presença(RA,idPalestra,Hora)values" + "(" + ra + "," + idPalestra + ",'" + hora + "')", con);
                         insere.ExecuteNonQuery();
                         MessageBox.Show("Gravação realiazada com sucesso!");

                        }

                        catch (Exception ex)
                            {
                             MessageBox.Show(ex.ToString());
                            }

                       finally
                            {
                             con.Close();
                             label3.Text = "NOME";
                             textBox2.Focus();
                             textBox2.Clear();
                            }
                    }//if

                        else if (status == 1)
                        {
                            MessageBox.Show("Esse aluno está desativado", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                        }
                        else
                        {
                            con.Close();
                            MessageBox.Show("Esse aluno já tem presença nesta palestra", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                        }

                       
                    }//if
                    else
                    {
                      MessageBox.Show("Esse aluno não está cadastrado no sistema. Deseja cadastra-lo?", "sla", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                    }

                }//try

                catch(Exception ex)
                {
                 MessageBox.Show(ex.ToString());
                }

                finally
                {
                 con.Close();
                }
            }// IF KEY
            }
            else
            {
                MessageBox.Show("Preencha todos os campos!");
            }
        }

        private void comboBox1_SelectedValueChanged(object sender, EventArgs e)
        {
            /*try
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select idPalestranta from Palestrantes where nomePalestra ='" + comboBox1.SelectedItem.ToString() + "'", con);
                MySqlDataReader resultado = busca_palestra.ExecuteReader();
                if (resultado.Read())
                {
                 idPalestra = Convert.ToInt32(resultado["idPalestranta"].ToString());
                }
            }
            catch(Exception ex)
            {
             MessageBox.Show(ex.ToString());
            }
            finally
            {
             con.Close();
            }*/
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
