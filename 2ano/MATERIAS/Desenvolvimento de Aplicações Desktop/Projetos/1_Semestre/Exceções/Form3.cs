using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Excecoes
{
    public partial class Form3 : Form
    {
        float calc;
        public Form3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                if (radioButton1.Checked)
                {
                    calc = (float.Parse(textBox1.Text) * float.Parse(textBox3.Text));
                    label5.Text = calc.ToString("0.00");
                }
                else if
                    (radioButton2.Checked)
                {
                    calc = (float.Parse(textBox2.Text) * float.Parse(textBox3.Text));
                    label5.Text = calc.ToString("0.00");
                }
                else
                    MessageBox.Show("Selecione um combústivel", "Atenção", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

            catch (FormatException ex) /*Caso de algum erro na conversão ele entra aqui - Não usei IF ,Uau ! ex : Váriavel*/
            {
                //MessageBox.Show("Não deixe campos vazios","Aviso",MessageBoxButtons.OK,MessageBoxIcon.Warning);
                MessageBox.Show(ex.Message); // Menssagem do próprio sistema
            }
            finally /* Sempre é executado*/
            {
                MessageBox.Show("Cálculo finalizado");
            }
        }
     

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            label5.Text = "";
        }
    }
}
