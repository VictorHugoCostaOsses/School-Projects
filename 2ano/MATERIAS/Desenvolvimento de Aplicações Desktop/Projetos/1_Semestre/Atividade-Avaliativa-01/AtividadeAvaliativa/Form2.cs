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
    public partial class Form2 : Form
    {
        float guardar = 0;
        float aritimetica;
        float ponderada;
        int a = 3;
        int b = 0;
        float calculo = 0;
        float calculo1 = 0;
        float calculo2 = 0;
        string texto = "";
        public Form2()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" )
            {
                MessageBox.Show("Preencha todos os campos", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            else

           {
                if (a == 1)
                {
                    guardar = float.Parse(textBox1.Text);
                    guardar += float.Parse(textBox2.Text);
                    guardar += float.Parse(textBox1.Text);
                    label5.Text = "";
                    aritimetica = guardar / 3;
                    label5.Text += aritimetica;
                }
                if (a == 2)
                {
                    guardar = float.Parse(textBox1.Text);
                    calculo = guardar * 3 / 10;

                    guardar = float.Parse(textBox2.Text);
                    calculo1 = guardar * 3 / 10;

                    guardar = float.Parse(textBox1.Text);
                    calculo2 = guardar * 4 / 10;

                    label5.Text = "";
                    label5.Text += calculo + calculo1 + calculo2;
                    ponderada = calculo + calculo1 + calculo2;


                }

                if (a == 3)
                {
                    MessageBox.Show("Selecione uma opção", "ATENCAO", MessageBoxButtons.OK);
                }

                if (b == 1 && a == 1)
                {
                    string texto = "N1 =   " + textBox1.Text + "   N2 =    " + textBox2.Text + "  N3 =   " + textBox3.Text + "  Media = " + aritimetica;
                    label5.Text = texto;

                }

                if (b == 1 && a == 2)
                {
                    

                }
            }
            if (checkBox1.Checked)
            {
                string texto = "N1 =  " + textBox1.Text + "  N2 =   " + textBox2.Text + "  N3 =    " + textBox3.Text + "  Media = " + ponderada;
                label5.Text = texto;
            }


        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            a = 1;
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            a = 2;
        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            label5.Text = "0";
            textBox1.Text = " ";
            textBox2.Text = " ";
            textBox3.Text = " ";
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            b = 1;
            label5.Text = "";
        }

        

        private void checkBox1_CheckedChanged_1(object sender, EventArgs e)
        {
            
        }
    }
}
