using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Teste
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n1 = 0;
            int n2 = 0;
            int maior = 0;
            int menor = 0;
            int cont = 0;
            int m = 0;
            try {
                n1 = int.Parse(textBox1.Text);
                n2 = int.Parse(textBox2.Text);


                if (n1 > n2)
                {
                    maior = n1;
                    menor = n2;
                }

                else
                {
                    menor = n1;
                    maior = n2;
                }

                for (m = menor; m <= maior; m++)
                {
                    if (m % 2 == 0)
                    {
                        listBox1.Items.Add(m);
                        cont++;
                    }
                    else if (m % 2 == 1)
                    {
                        listBox2.Items.Add(m);
                        cont++;
                    }
                    else if (m == maior)
                    {
                        listBox1.Items.Clear();
                        listBox2.Items.Clear();
                    }
                }
            }
            catch (FormatException ex)//Erros relacionados ao formato da cadeia de caractéres
            {
                MessageBox.Show(ex.Message, "Erro na formatação",MessageBoxButtons.OK,MessageBoxIcon.Warning);
            }
            catch(OverflowException ex)
            {
                MessageBox.Show(ex.Message, "Estouro no tamanho do int", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            catch (Exception ex)//Para erros desconhecidos; Sempre colocar como ultimo catch 
            {
                MessageBox.Show(ex.Message, "Erro desconhecido", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            finally
            {
                MessageBox.Show("Sempre será executado independetemente da ocorrencia de erros","Aleatório", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            }
            // Ctrl + Alt + E - Para ver todas as exceções... 
            //Abrir o Common Language Runtime Exceptions.....

       
        }

    }
}
