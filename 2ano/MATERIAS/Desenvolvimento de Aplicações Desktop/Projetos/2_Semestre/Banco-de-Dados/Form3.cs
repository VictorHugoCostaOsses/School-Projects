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
    public partial class Form3 : Form
    {
        MySqlConnection con = new MySqlConnection("server=143.106.241.3;port=3306;User ID=cl18152;database=cl18152;password=cl*07062002");
        string dia;
        string hora;
        int x = 0;
        public Form3()
        {
            InitializeComponent();
            try
            {
                con.Open();
                MessageBox.Show("Conectado com sucesso!");
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }
            this.WindowState = FormWindowState.Maximized;

        }


        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "" && textBox3.Text != "" && textBox4.Text != "" && textBox5.Text != "")
            { 
            con.Open();
            MySqlCommand consulta = new MySqlCommand("Select dia,hora from Palestrantes", con);
            MySqlDataReader resultado = consulta.ExecuteReader();


                string guardar1 = textBox3.Text;
                string guardar2 = textBox4.Text;

                while (resultado.Read())
            {
                dia = resultado["dia"].ToString();
                hora = resultado["hora"].ToString();

                if (dia == guardar1 && hora == guardar2)
                {
                 x = 1;
                }
            }

            if (x == 0)
            {
             con.Close();
             con.Open();
             MySqlCommand insere = new MySqlCommand("insert into Palestrantes(nomePalestra,nomePalestrante,dia,hora,email)values('" + textBox1.Text + "','" + textBox2.Text + "','" + textBox3.Text + "','" + textBox4.Text + "','" + textBox5.Text + "')", con);
             insere.ExecuteNonQuery();
             MessageBox.Show("Gravação realizada com sucesso");

            }

            else if(x==1)
            {
             MessageBox.Show("Já há uma palestra agendada para esse dia e hora.");
             x = 0;
            }

            con.Close();
            }

            else
            {
             MessageBox.Show("Preecha todos os campos", "Aviso",MessageBoxButtons.OK,MessageBoxIcon.Warning);
            }

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form3_Load(object sender, EventArgs e)
        {
         
        }
    }
}
