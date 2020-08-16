using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercicio3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for (int i = 0; i <= 20;i++)
            {
                if (i == 5) continue;
                listBox1.Items.Add(i);
                /*if (i == 5) break;*/
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int i = 10;
            while (i>=0)
            {
                listBox1.Items.Add(i);
                i--;
            }
                
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int i = -1;
            do
            {
                listBox1.Items.Add(i);
                i--;
            } while (i >= 0);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
