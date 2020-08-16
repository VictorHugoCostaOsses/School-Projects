using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace combobox
{
    public partial class Form1 : Form
    {
        int a = 0;
        string arquivo;
        
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            FontFamily[] lista = FontFamily.Families; /* Variavel lista vai conter todas as fontes disponiveis*/
            
            for(int i = 0;i<lista.Length;i++)/* Carregar todos  as familias. Lenght até o final  da lista,nesse caso.*/
            {
                comboBox1.Items.Add(lista[i].Name);
                a++;
            }
           
    
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            label1.Text = Convert.ToString(a);
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "Arquivos Texto(*.txt)|*.txt|Todos os arquivos(*.*)|*.*";
            openFileDialog1.ShowDialog();
            arquivo = openFileDialog1.FileName;
            StreamReader texto = new StreamReader(arquivo);
            string linha = texto.ReadLine();
            while(linha!=null)
            {
                richTextBox1.Text += linha;
                linha = texto.ReadLine();
              
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if(comboBox1.Text !="")
            {
                FontFamily fonte = new FontFamily(comboBox1.Text);
                richTextBox1.Font = new Font(fonte, 10);
            }
            else
            {
                MessageBox.Show("Selecione uma fonte", "ATENCAO", MessageBoxButtons.OK);
            }
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
          
        }

        private void richTextBox1_SelectionChanged(object sender, EventArgs e)
        {
            richTextBox1.SelectionColor = Color.Blue;
           
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
