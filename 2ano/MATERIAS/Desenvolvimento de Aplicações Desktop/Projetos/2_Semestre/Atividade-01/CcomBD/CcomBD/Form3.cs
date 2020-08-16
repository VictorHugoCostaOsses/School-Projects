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
    public partial class Form3 : Form
    {
        MySqlConnection con = new MySqlConnection("server=143.106.241.1; port=3306;UserID=cl18148;database=cl18148;password=cl*28122002");
        public Form3()
        {
            InitializeComponent();
        }

        private void Form3_Load(object sender, EventArgs e)
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
                MySqlCommand insere = new MySqlCommand("insert into Palestra(idPalestra,nomePalestra,nomePalestrante,dia,hora) values(" + textBox1.Text + ",'" + textBox2.Text + "','" + textBox3.Text+"','" + textBox4.Text+"','" + textBox5.Text+"')", con);
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
