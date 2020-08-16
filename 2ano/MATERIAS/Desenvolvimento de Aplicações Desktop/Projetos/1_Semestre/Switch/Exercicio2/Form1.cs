using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercicio2
{
    public partial class Exemplo3 : Form
    {
        public Exemplo3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            /* if (textBox1.Text == "COTIL")
            {
                label1.Text = "Acertou Miseravi";
            }
            else
            {
                label1.Text = "Eroooooooooou.Chola mais";
            } */

            switch(textBox1.Text)
            {
                case "COTIL":
                    label1.Text = "Acertou: COTIL!";
                    break;
                case "UNICAMP":
                    label1.Text = "acertou: Unicamp!";
                    break;
                default:
                    label1.Text = "Escreveu " + textBox1.Text;
                    break;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
