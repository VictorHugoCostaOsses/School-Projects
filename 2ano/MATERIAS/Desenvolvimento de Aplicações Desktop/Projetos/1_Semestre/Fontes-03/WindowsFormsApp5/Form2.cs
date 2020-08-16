using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp5
{
    public partial class Form2 : Form
    {
        float guardar = 0;
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            FontFamily fonte = new FontFamily("Georgia");
            listBox1.Font = new Font(fonte, 16);
           

        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox2.Text == "" || textBox4.Text == "" || textBox3.Text == "")
            {
                MessageBox.Show("Preencha todos os campos", "Avivso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            else
            {
                guardar = float.Parse(textBox4.Text) * float.Parse(textBox3.Text);
                listBox1.Items.Add(" " + textBox4.Text + " " + textBox2.Text + " custam R$" + guardar);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            BackColor = Color.Yellow; 
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button5_Click(object sender, EventArgs e)
        {
            FontFamily[] lista = FontFamily.Families;

            for(int i =0;  i <lista.Length; i++) 
                {
                comboBox1.Items.Add(lista[i].Name);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {

            richTextBox1.Text = textBox2.Text+ " "+  textBox4.Text+ " "+ textBox3.Text;
            if(comboBox1.Text != "")
            {
                FontFamily fonte = new FontFamily(comboBox1.Text);
                richTextBox1.Font = new Font(fonte, 10);
            }
            else
            {
                MessageBox.Show("Selecione uma fonte", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            ColorDialog.ShowDialog();
            BackColor = ColorDialog.Color;
        }
    }
}
