using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ConsultaMedica
{
    public partial class Form2 : Form
    {

        /* C:\Users\aluno\source\repos\AtividadeAvaliativa2*/
        string caminho = Directory.GetCurrentDirectory();
        int op = 0;
        public Form2()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }



        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label10_Click(object sender, EventArgs e)
        {
            op = 10;
            label4.BackColor = Color.White;
            label9.BackColor = Color.White;
            label3.BackColor = Color.White;
            label8.BackColor = Color.White;
            label1.BackColor = Color.White;
            label6.BackColor = Color.White;
            label2.BackColor = Color.White;
            label7.BackColor = Color.White;
            label10.BackColor= Color.Blue;
            label5.BackColor = Color.Blue;
        }

        private void monthCalendar1_DateChanged(object sender, DateRangeEventArgs e)
        {
            textBox1.Text = monthCalendar1.SelectionRange.Start.ToLongDateString();
            /*textBox1.Text = monthCalendar1.SelectionRange.Start.ToString("MM/dd/yyyy"); */
        }

        private void label6_Click(object sender, EventArgs e)
        {
            op = 6;
            label1.BackColor = Color.Blue;
            label6.BackColor = Color.Blue;
            label2.BackColor = Color.White;
            label7.BackColor = Color.White;
            label3.BackColor = Color.White;
            label8.BackColor = Color.White;
            label4.BackColor = Color.White;
            label9.BackColor = Color.White;
            label10.BackColor = Color.White;
            label5.BackColor = Color.White;


        }

        private void label7_Click(object sender, EventArgs e)
        {
            op = 7;
            label1.BackColor = Color.White;
            label6.BackColor = Color.White;
            label2.BackColor = Color.Blue;
            label7.BackColor = Color.Blue;
            label3.BackColor = Color.White;
            label8.BackColor = Color.White;
            label4.BackColor = Color.White;
            label9.BackColor = Color.White;
            label10.BackColor = Color.White;
            label5.BackColor = Color.White;
        }

        private void label8_Click(object sender, EventArgs e)
        {
            op = 8;
            label3.BackColor = Color.Blue;
            label8.BackColor = Color.Blue;
            label1.BackColor = Color.White;
            label6.BackColor = Color.White;
            label4.BackColor = Color.White;
            label9.BackColor = Color.White;
            label2.BackColor = Color.White;
            label7.BackColor = Color.White;
            label10.BackColor = Color.White;
            label5.BackColor = Color.White;
        }

        private void label9_Click(object sender, EventArgs e)
        {
            op = 9;
            label4.BackColor = Color.Blue;
            label9.BackColor = Color.Blue;
            label3.BackColor = Color.White;
            label8.BackColor = Color.White;
            label1.BackColor = Color.White;
            label6.BackColor = Color.White;
            label2.BackColor = Color.White;
            label7.BackColor = Color.White;
            label10.BackColor = Color.White;
            label5.BackColor = Color.White;
        }

        /* */
        private void button1_Click(object sender, EventArgs e)
        {
            if(op ==6)
            {
                label6.Text = textBox2.Text + "," + textBox1.Text;
            }
            if (op == 7)
            {
                label7.Text = textBox2.Text + "," + textBox1.Text;
            }
            if (op == 8)
            {
                label8.Text = textBox2.Text + "," + textBox1.Text;
            }
            if (op == 9)
            {
                label9.Text = textBox2.Text + "," + textBox1.Text;
            }
            if(op == 10)
            {
                label10.Text = textBox2.Text + "," + textBox1.Text;
            }
           if(op == 0 || textBox2.Text == "" || textBox1.Text == "")
            {
                MessageBox.Show("Preencha todos os campos", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

          

        }

        private void button2_Click(object sender, EventArgs e)
        {
            string nome_arq = monthCalendar1.SelectionRange.Start.ToLongDateString();
            StreamWriter arquivo;     /* Colocar caminho aqui - "E:\\2° ano\\ConsultaMedica\\ConsultaMedica\\bin\\Debug"*/
            if (System.IO.File.Exists(caminho + nome_arq + ".txt"))File.Delete(caminho + nome_arq + ".txt");
            arquivo = new StreamWriter(caminho + nome_arq + ".txt");
            foreach (Label controle in tableLayoutPanel1.Controls)/* nome do objeto - nome qualquer - e onde procucurar.Controls*/

            {/* foreach - laço de repetição que vai verificar os labels*/
                arquivo.WriteLine(controle.Text); /* sempre que passar nesse laço ele grava aqui*/
            }
            arquivo.Close(); /* Obrigatório*/
            MessageBox.Show("Arquivo Gravado com sucesso!","Finalização",MessageBoxButtons.OK, MessageBoxIcon.Information);
           }

        private void button3_Click(object sender, EventArgs e)
        {
            DialogResult certeza = MessageBox.Show("Tem certeza que deseja apertar ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (certeza == System.Windows.Forms.DialogResult.Yes)
                MessageBox.Show("Apertou Sim");
            else
                MessageBox.Show("Apertou não");
            

        }

        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void label1_MouseClick(object sender, MouseEventArgs e)
        {
            label1.BackColor = Color.Blue;
            label6.BackColor = Color.Blue;
        }

        private void label6_DoubleClick(object sender, EventArgs e)
        {
            if(label6.Text != "Disponivel")
            {
                DialogResult certeza = MessageBox.Show("Tem certeza que deseja apertar ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (certeza == System.Windows.Forms.DialogResult.Yes)
                {
                    MessageBox.Show("Apertou Sim");
                    label6.Text = "Disponivel";
                }
                  
                else
                    MessageBox.Show("Apertou não");
            }
        }

        private void label7_DoubleClick(object sender, EventArgs e)
        {
            if (label7.Text != "Disponivel")
            {
                DialogResult certeza = MessageBox.Show("Tem certeza que deseja apertar ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (certeza == System.Windows.Forms.DialogResult.Yes)
                {
                    MessageBox.Show("Apertou Sim");
                    label7.Text = "Disponivel";
                }

                else
                    MessageBox.Show("Apertou não");
            }
        }

        private void label8_DoubleClick(object sender, EventArgs e)
        {
            if (label8.Text != "Disponivel")
            {
                DialogResult certeza = MessageBox.Show("Desmarcar a consulta ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (certeza == System.Windows.Forms.DialogResult.Yes)
                {
                    MessageBox.Show("Consulta Desmarcada");
                    label8.Text = "Disponivel";
                }

                else
                    MessageBox.Show("Consulta mantida");
            }
        }

        private void label9_DoubleClick(object sender, EventArgs e)
        {
            if (label9.Text != "Disponivel")
            {
                DialogResult certeza = MessageBox.Show("Tem certeza que deseja apertar ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (certeza == System.Windows.Forms.DialogResult.Yes)
                {
                    MessageBox.Show("Apertou Sim");
                    label9.Text = "Disponivel";
                }

                else
                    MessageBox.Show("Apertou não");
            }
        }

        private void label10_DoubleClick(object sender, EventArgs e)
        {
            if (label10.Text != "Disponivel")
            {
                DialogResult certeza = MessageBox.Show("Tem certeza que deseja apertar ? ", "Pergunta", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (certeza == System.Windows.Forms.DialogResult.Yes)
                {
                    MessageBox.Show("Apertou Sim");
                    label10.Text = "Disponivel";
                }

                else
                    MessageBox.Show("Apertou não");
            }
        }
    }
}
