using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TableControl
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs VAR) /* VAR - Váriavel*/
        {
            if((Keys)VAR.KeyChar == Keys.Enter)
            {
                maskedTextBox1.Focus();
            }
        }

        private void maskedTextBox1_KeyPress(object sender, KeyPressEventArgs VAR)
        {
            if ((Keys)VAR.KeyChar == Keys.Enter)
            {
                listBox1.Items.Add(textBox1.Text);
                listBox2.Items.Add(maskedTextBox1.Text);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (listBox3.SelectedIndex == 0)
                textBox2.Text = (int.Parse(textBox2.Text) + 1).ToString();
            else if (listBox3.SelectedIndex == 1)
                textBox3.Text = (int.Parse(textBox3.Text) + 1).ToString();
            else if (listBox3.SelectedIndex == 2)
                textBox4.Text = (int.Parse(textBox4.Text) + 1).ToString();
            else
                MessageBox.Show("Selecione um cadidato");
        }
    }
}
