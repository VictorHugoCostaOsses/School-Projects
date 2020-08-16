using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AtividadeAvaliativa2
{
    public partial class Form1 : Form
    {
        /* C:\Users\aluno\source\repos\AtividadeAvaliativa2*/
        double total=0;
        string nome_arq;
        int guardar = 0;
        string caminho = Directory.GetCurrentDirectory();
        DateTime inicio, fim;
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            if (comboBox1.Text == "Professores") 
            {
                groupBox1.Visible = true;
                groupBox2.Visible = false;
            }
            else
            {
                groupBox2.Visible = true;
                groupBox1.Visible = false;
            }
              
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if(checkBox1.Checked == true)
            {
                listBox2.Items.Add(checkBox1.Text);
                checkBox1.Visible = false;

                checkBox1.Checked = false;
            }
            if (checkBox2.Checked == true)
            {
                listBox2.Items.Add(checkBox2.Text);
                checkBox2.Visible = false;

                checkBox2.Checked = false;
            }
            if (checkBox3.Checked == true)
            {
                listBox2.Items.Add(checkBox3.Text);
                checkBox3.Visible = false;

                checkBox3.Checked = false;
            }
            if (checkBox4.Checked == true)
            {
                listBox2.Items.Add(checkBox4.Text);
                checkBox4.Visible = false;

                checkBox4.Checked = false;
            }
            if (checkBox5.Checked == true)
            {
                listBox2.Items.Add(checkBox5.Text);
                checkBox5.Visible = false;

                checkBox5.Checked = false;
            }
            if (checkBox6.Checked == true)
            {
                listBox2.Items.Add(checkBox6.Text);
                checkBox6.Visible = false;

                checkBox6.Checked = false;
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "1" ;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "2";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "3";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "6";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "7";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "8";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "9";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "0";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if(textBox1.Text != "")
            {
                listBox1.Items.Add(textBox1.Text);
                textBox1.Text = "";
            }
          
           
            

        }

        private void button12_Click(object sender, EventArgs e)
        {

            if (this.listBox1.SelectedItem != null)
                this.listBox1.Items.Remove(this.listBox1.SelectedItem);
            else
                MessageBox.Show("Item não selecionado", "WARNING" , MessageBoxButtons.OK, MessageBoxIcon.Warning);
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            
         
        }

        private void button11_Click(object sender, EventArgs e)
        {

            try
            {
                guardar = listBox1.Items.Count;
                if (guardar >= 3)
                {


                    for (int i = 0; i <= listBox1.Items.Count; i++)
                    {

                        total += Convert.ToDouble(listBox1.Items[i]);
                    }
                    label1.Text = Convert.ToString(total);
                }
            }
            catch(FormatException ex)
            {
                guardar = listBox1.Items.Count;
                if (guardar < 3)
                MessageBox.Show("Não possue 3 ou mais elementos", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            finally
            {
                MessageBox.Show("d", "g", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            
            
        
        }

        private void label2_Click(object sender, EventArgs e)
        {

            
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
     
            fim = DateTime.Now;
            TimeSpan dif = fim.Subtract(inicio);
            label2.Text = dif.ToString("hh\\:mm\\:ss");
        }

        private void button15_Click(object sender, EventArgs e)
        {
          
        }

        private void tabPage1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
    }
}
