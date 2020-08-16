using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BandoDeDados
{
    public partial class Form5 : Form
    {
        MySqlConnection con = new MySqlConnection("server=143.106.241.3;port=3306;User ID=cl18152;database=cl18152;password=cl*07062002");
        int ra;
        public Form5()
        {
            InitializeComponent();
            try
            {
                con.Open();
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

        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                con.Open();
              
                MySqlCommand verificacao = new MySqlCommand("Select Alunos.idAlunos from Alunos,Presença where Presença.RA=" + textBox1.Text, con);
                MySqlDataReader lendo = verificacao.ExecuteReader();

                
                
                if (lendo.Read() == true)
                {
                    con.Close();
                    con.Open();

                    MySqlCommand inserir = new MySqlCommand("update Alunos set Status ="+ 1 +" where idAlunos=" + textBox1.Text,con);
                    inserir.ExecuteNonQuery();
                }
                else
                {
                    try
                    {
                        con.Close();
                        con.Open();
                        MySqlCommand exclusao = new MySqlCommand("delete from Alunos where idAlunos=" + textBox1.Text, con);
                        exclusao.ExecuteNonQuery();

                        textBox1.Clear();
                        textBox2.Clear();
                        label2.Text = "Aluno";
                        MessageBox.Show("Aluno excluido com sucesso!", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                    }
                    catch (Exception ex1)
                    {
                        MessageBox.Show(ex1.ToString());

                    }
                    finally
                    {
                        con.Close();
                    }
                }

            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }

           


        }

        private void Form5_KeyPress(object sender, KeyPressEventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(textBox1.Text != "")
            { 
            if ((Keys)e.KeyChar == Keys.Enter)
            {
                try
                {
                    con.Open();
                    MySqlCommand buscar_ra = new MySqlCommand("Select nomeAlunos, idAlunos,email from Alunos where idAlunos =" + textBox1.Text, con);
                    MySqlDataReader resultado = buscar_ra.ExecuteReader();
                 

                    
                    if (resultado.Read())
                    {

                        label2.Text = resultado["nomeAlunos"].ToString();
                        ra = Convert.ToInt32(resultado["idAlunos"]);
                        textBox2.Text = resultado["nomeAlunos"].ToString();
                        textBox3.Text = resultado["email"].ToString();
                    }
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.ToString());
                }
                finally
                {
                    con.Close();
                }

            }
            }
            else
            {
                MessageBox.Show("Preencha todos os campos");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                

                con.Open();
                
                MySqlCommand atualizar = new MySqlCommand("update Alunos set nomeALunos='" + textBox2.Text + "', email='"+ textBox3.Text +"', Imagem="+ "@foto" + " where idAlunos=" + ra, con);

                 
                atualizar.Parameters.AddWithValue("foto", ConverterFotoParaByteArray());

                atualizar.ExecuteNonQuery();
                label2.Text = textBox2.Text;
                MessageBox.Show("Atualização realizada com sucesso!");
                textBox1.Clear();
                textBox2.Clear();
                textBox3.Clear();
                label2.Text = "Aluno";

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            groupBox2.Visible = true;

        }

        private void Form5_Load(object sender, EventArgs e)
        {

        }

        private byte[] ConverterFotoParaByteArray()
        {
            using (var stream = new System.IO.MemoryStream())
            {
                pictureBox1.Image.Save(stream, System.Drawing.Imaging.ImageFormat.Png);
                stream.Seek(0, System.IO.SeekOrigin.Begin);
                byte[] bArray = new byte[stream.Length + 25];/* stream.Length - tamanho da imagem*/
                stream.Read(bArray, 0, System.Convert.ToInt32(stream.Length));/*.Read é o nosso laço de repetição*/
                return bArray;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            OpenFileDialog carrega_foto = new OpenFileDialog();
            carrega_foto.Title = "Abrir Foto";
            carrega_foto.Filter = "JPG(*.jpg)|*.jpg" + "|All files(*.*)|*.*";

            if (carrega_foto.ShowDialog() == DialogResult.OK)
            {
                try
                {
                    pictureBox1.Image = new Bitmap(carrega_foto.OpenFile());
                }
                catch (Exception ex)
                {
                    MessageBox.Show("Não foi possível carregar a foto:" + ex.Message);
                }

            }
            carrega_foto.Dispose();
        }
    }
}
