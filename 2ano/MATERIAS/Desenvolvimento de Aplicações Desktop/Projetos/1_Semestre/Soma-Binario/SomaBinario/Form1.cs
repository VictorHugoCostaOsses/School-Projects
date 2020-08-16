using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SomaBinario
{
    public partial class Form1 : Form
    {
        int guardar = 0;
        int a = 0;
        int resultado = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            guardar = int.Parse(textBox1.Text);
            textBox1.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
        
            resultado = guardar + int.Parse(textBox1.Text);
            textBox1.Clear();
            textBox1.Text += resultado;
           
           
               
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            resultado = 0;
        }
    }
}
