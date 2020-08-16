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
    public partial class Form2 : Form
    {
        int cont = 0;
        public Form2()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

        private void comboBox1_Click(object sender, EventArgs e)
        {
            
          
        }

        private void comboBox1_MouseClick(object sender, MouseEventArgs e)
        {
            if (cont == 0)
            {
                comboBox1.Items.Add("Frasco de 500ml");
                comboBox1.Items.Add("Frasco de 1L");
                cont++;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            float calc;
            try
            {
                if (comboBox1.Text == "Frasco de 500ml" && textBox1.Text != null)
                {
                    calc = 5 * (float.Parse(textBox1.Text));
                    label4.Text = calc.ToString("0.00"); 
                }
                else if (comboBox1.Text == "Frasco de 1L" && textBox1.Text != null)
                {
                    calc = 10 * (float.Parse(textBox1.Text));
                    label4.Text = calc.ToString("0.00");
                }
                else
                    MessageBox.Show("Selecione o Frasco", "ATENÇÃO", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            catch(FormatException)
            {
                MessageBox.Show("Preencha corretamente todos os campos!", "ATENÇÃO", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            finally
            {
                MessageBox.Show("Cálculo Finalizado!", "Fim de Execução", MessageBoxButtons.OK, MessageBoxIcon.None);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            comboBox1.Text = null;
            textBox1.Text = null;
            label4.Text = "0";
            MessageBox.Show("Limpo com Sucesso!", "Fim de Execução", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
        }
    }
}
