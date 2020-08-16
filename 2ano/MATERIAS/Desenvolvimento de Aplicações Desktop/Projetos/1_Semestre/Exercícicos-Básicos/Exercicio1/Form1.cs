using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercicio1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void maskedTextBox1_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {
           
                MessageBox.Show("Campo obrigatório", "Atenção", MessageBoxButtons.OK, MessageBoxIcon.Warning);
              
        
        }

        private void button3_Click(object sender, EventArgs e)
        {
            DialogResult quadrad = MessageBox.Show("Tem certeza que deseja apertar?", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (quadrad == System.Windows.Forms.DialogResult.Yes)
                MessageBox.Show("Apertou Sim");
            else
                MessageBox.Show("Apertou Não");
        }if 


        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "a")
            {
                MessageBox.Show("Campo obrigatório", "Atenção", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text = "Visual Studio 2017";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void dsToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void dfToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }
    }
}
