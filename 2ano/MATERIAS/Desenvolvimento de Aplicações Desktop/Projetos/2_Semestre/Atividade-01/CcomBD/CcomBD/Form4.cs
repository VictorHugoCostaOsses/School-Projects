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

namespace CcomBD
{
    public partial class Form4 : Form
    {
        MySqlConnection con;
        int idPalestra, ra;
        public Form4()
        {
            InitializeComponent();
            try
            {
                con = new MySqlConnection("server=143.106.241.1; port=3306;UserID=cl18148;database=cl18148;password=cl*28122002");
                MessageBox.Show("Falha na Conexão!!");
                MessageBox.Show("TROLLEI");
            }
            catch
            {
                MessageBox.Show("Falha na conexão!!");
            }
            this.WindowState = FormWindowState.Maximized;
        }

        private void Form4_Load(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select nomePalestra from Palestra", con);
                MySqlDataReader resultado = busca_palestra.ExecuteReader();
                while (resultado.Read())
                {
                    comboBox1.Items.Add(resultado["nomePalestra"].ToString());
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

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((Keys)e.KeyChar == Keys.Enter)
            {
                try
                {
                    con.Open();
                    MySqlCommand busca_ra = new MySqlCommand("Select nomeAlunos, idAlunos from Alunos where idAlunos=" + textBox1.Text, con);

                    MySqlDataReader resultado = busca_ra.ExecuteReader();
                    if (resultado.Read())
                    {
                        label3.Text = resultado["nomeAlunos"].ToString();
                        ra = Convert.ToInt32(resultado["idAlunos"].ToString());
                        //insere
                        con.Close();
                        try
                        {
                            con.Open();
                            MySqlCommand insere = new MySqlCommand("insert into Presenca (RA, idPalestra, Hora) values (" + ra + "," + idPalestra + ",'" + DateTime.Now.ToShortTimeString() + "')", con);
                            insere.ExecuteNonQuery();
                            MessageBox.Show("Registrado");
                        }
                        catch (Exception ex)
                        {
                            MessageBox.Show(ex.ToString());
                        }
                        finally
                        {
                            con.Close();
                            textBox1.Clear();
                            textBox1.Focus();
                            label3.Text = "Aluno";
                        }
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

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select nomePalestra,idPalestra from Palestra where nomePalestra ='" + comboBox1.SelectedItem.ToString() + "'", con);

                MySqlDataReader resultado = busca_palestra.ExecuteReader();
                if(resultado.Read())
                {
                    idPalestra = Convert.ToInt32(resultado["idPalestra"].ToString());
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

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
