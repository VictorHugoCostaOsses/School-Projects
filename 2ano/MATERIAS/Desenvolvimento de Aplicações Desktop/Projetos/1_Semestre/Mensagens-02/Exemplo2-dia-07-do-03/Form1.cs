using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exemplo2_dia_07_do_03
{
    public partial class Form1 : Form
    {
        int erro = 0;
        string result;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            MessageBoxButtons botao = new MessageBoxButtons();
            

            
            
              else if (radioButton1.Checked) botao = MessageBoxButtons.OK;
              else  if (radioButton2.Checked) botao = MessageBoxButtons.OKCancel;
              else  if (radioButton3.Checked) botao = MessageBoxButtons.AbortRetryIgnore;
              else  if (radioButton5.Checked) botao = MessageBoxButtons.YesNoCancel;
              else  if (radioButton7.Checked) botao = MessageBoxButtons.YesNo;
              else if (radioButton4.Checked) botao = MessageBoxButtons.RetryCancel;
              
              else
             erro = 1;
                  
              
                DialogResult resul = MessageBox.Show ("Escolha um opção","ATENÇÃO",botao);
               
             
           


            MessageBoxIcon icone = new MessageBoxIcon();
            
                 else if (radioButton10.Checked) icone = MessageBoxIcon.Error;
                else if (radioButton9.Checked) icone = MessageBoxIcon.Exclamation;
                else if (radioButton8.Checked) icone = MessageBoxIcon.Information;
                else if (radioButton6.Checked) icone = MessageBoxIcon.Question;
                else erro = 1;
            

           



         
             
                DialogResult result = MessageBox.Show("Caixa de mensagem", "ATENÇÃO", botao, icone);
            
           
            
           

            switch (resul)
            {
                case DialogResult.OK:
                    Text = "Pressionou OK";
                    break;
                case DialogResult.Cancel:
                    Text = "Pressionou Cancel";
                    break;
                case DialogResult.Abort:
                    Text = "Pressionou Abort";
                    break;
                case DialogResult.Retry:
                    Text = "Pressionou Retry";
                    break;
                case DialogResult.Ignore:
                    Text = "Pressionou Ignore";
                    break;
                case DialogResult.Yes:
                    Text = "Pressionou Yes";
                    break;
                case DialogResult.No:
                    Text = "Pressionou No";
                    break;
            }
        }
    }
}
