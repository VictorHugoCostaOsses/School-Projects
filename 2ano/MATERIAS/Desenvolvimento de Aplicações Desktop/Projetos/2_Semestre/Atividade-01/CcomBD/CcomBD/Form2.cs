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
    public partial class Form2 : Form
    {
        MySqlConnection con = new MySqlConnection("server=143.106.241.1; port=3306;UserID=cl18148;database=cl18148;password=cl*28122002");
        public Form2()
        {
            InitializeComponent();            
        }
        private byte[] ConverterFotoParaByteArray()
        {
            using (var stream = new System.IO.MemoryStream())
            {
                pictureBox1.Image.Save(stream, System.Drawing.Imaging.ImageFormat.Png);
                stream.Seek(0, System.IO.SeekOrigin.Begin);
                byte[] bArray = new byte[stream.Length];
                stream.Read(bArray, 0, System.Convert.ToInt32(stream.Length));
                return bArray;
            }
        }
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form2_Load(object sender, EventArgs e)
        {
            try
            {          
                con.Open();
                MessageBox.Show("Conectado");
                con.Close();
            }
            catch
            {
                MessageBox.Show("Erro na Conexão");
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            try
            {              
                con.Open();
                MySqlCommand insere = new MySqlCommand("insert into Alunos(idAlunos,nomeAlunos,turmaAlunos, fotosAlunos) values(" + textBox1.Text + ",'" + textBox2.Text + "','" + comboBox1.SelectedItem.ToString() + "',@foto)", con);

                insere.Parameters.AddWithValue("foto", ConverterFotoParaByteArray());

                insere.ExecuteNonQuery();
                MessageBox.Show("Gravação realizada com sucesso");
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Falha na Gravação");
                MessageBox.Show(ex.ToString());
            }
        } 
    }
}
