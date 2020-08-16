using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace EzercicioREAL1
{
    public partial class Form1 : Form
    {
        float resultado = 0;
        float precoFinal = 0;
        public Form1()
        {

            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
          
            if(textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "")
            {
                MessageBox.Show("Preencha todos os campos", "Alerta", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            else 
            {
         
                resultado = float.Parse(textBox3.Text) * float.Parse(textBox2.Text);
                listBox1.Items.Add(textBox3.Text + "  " + textBox1.Text + "  custam " + "R$" + resultado);
                label1.Text = "";
                precoFinal +=  resultado;
                label1.Text = "R$" + Convert.ToString(precoFinal);
            }
                

   
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(textBox4.Text == "1234")
                {
                Form2 form2 = new Form2();
                form2.Show();
            }
            else
            {
                MessageBox.Show("Burro", "Alerta", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
               
            }
          
            
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
          
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
