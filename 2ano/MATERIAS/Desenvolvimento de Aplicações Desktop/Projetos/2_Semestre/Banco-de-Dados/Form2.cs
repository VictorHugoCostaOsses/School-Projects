using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.TextBox;

namespace BandoDeDados
{
    public partial class Form2 : Form

    {

        MySqlConnection con = new MySqlConnection("server=143.106.241.3;port=3306;User ID=cl18152;database=cl18152;password=cl*07062002");
        
        
        public Form2()
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

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            con.Open();
            MySqlCommand nome = new MySqlCommand("Select idAlunos from Alunos where idAlunos=" + textBox1.Text, con);
            MySqlDataReader resultado = nome.ExecuteReader();
            
            if(resultado.Read())
            {
             MessageBox.Show("Esse RA já está cadastrado", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
             con.Close();
            }
         
            else
             {
              try
              {
               con.Close();
               con.Open();
               MySqlCommand insere = new MySqlCommand("insert into Alunos(idAlunos, nomeAlunos, turmaAlunos,Imagem,email,Carteirinha,Status)values(" + textBox1.Text + ",'" + textBox2.Text + "','" + comboBox1.SelectedItem.ToString() + "', @foto" + ",'" + textBox3.Text + "','"+ textBox4.Text + "'," + 0 + ")", con);
               insere.Parameters.AddWithValue("foto", ConverterFotoParaByteArray());/*ConverterFotoParaByteArray() - Retorna um byte*/
               insere.ExecuteNonQuery();
               MessageBox.Show("Gravação realizada com sucesso");
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

        private byte[] ConverterFotoParaByteArray()
        {
            using (var stream = new System.IO.MemoryStream())
            {
                pictureBox1.Image.Save(stream, System.Drawing.Imaging.ImageFormat.Png);
                stream.Seek(0, System.IO.SeekOrigin.Begin);
                byte[] bArray = new byte[stream.Length+25];/* stream.Length - tamanho da imagem*/
                stream.Read(bArray, 0, System.Convert.ToInt32(stream.Length));/*.Read é o nosso laço de repetição*/
                return bArray;
            }
        }

        private void Form2_Load(object sender, EventArgs e)
        {
          
        }

        private void button2_Click(object sender, EventArgs e)
        {

            OpenFileDialog carrega_foto = new OpenFileDialog();
            carrega_foto.Title = "Abrir Foto";
            carrega_foto.Filter = "JPG(*.jpg)|*.jpg" + "|All files(*.*)|*.*";
            if (carrega_foto.ShowDialog()==DialogResult.OK)
            {
                try
                {
                    pictureBox1.Image = new Bitmap(carrega_foto.OpenFile());
                }
                catch(Exception ex)
                {
                    MessageBox.Show("Não foi possível carregar a foto:"+ex.Message);
                }
            }
            carrega_foto.Dispose();
        }

        private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}
