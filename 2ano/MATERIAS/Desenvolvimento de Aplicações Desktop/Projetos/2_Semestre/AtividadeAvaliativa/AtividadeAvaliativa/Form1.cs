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

namespace AtividadeAvaliativa
{
    public partial class Form1 : Form
    {
        double valor_veiculo;
        MySqlConnection con; 
        DateTime inicio, fim;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
        
        }

        private void tabPage2_Click(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                valor_veiculo = Convert.ToInt32(textBox1.Text);
                textBox3.Text = Convert.ToString(valor_veiculo * 0.04) ;
            }
            catch(Exception ex)
            {
                MessageBox.Show("dsfsf", "fdsfs", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            finally
            {
                MessageBox.Show("dsfsf", "fdsfs", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            try
            {
                if (radioButton1.Checked == true)
                {
                    textBox4.Text = Convert.ToString(Convert.ToInt32(textBox3.Text) - (Convert.ToInt32(textBox3.Text) * 0.1));
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show("dsfsf", "fdsfs", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            finally
            {

            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            fim = DateTime.Now;
            TimeSpan dif = fim.Subtract(inicio);
            label6.Text = dif.ToString("hh\\:mm\\:ss");
        }
    }
}
