using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ExercicioSla
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            FontFamily fm = new FontFamily("Arial");
            label1.Font = new Font(fm, 20);
            FontStyle fs = Font.Style; /* Pra poder acrescenter negrito,italico etc.OBS: Evento Changed */
            label1.Font = new Font(label1.Font, FontStyle.Bold);



            label1.Text = textBox1.Text;

            /*Para colocar "*" va nas propriedades do textbox altere no "password char" :D*/
            
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            label2.Font = new Font(label2.Font.Name, label2.Font.Size, label2.Font.Style ^ FontStyle.Bold);
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            label2.Font = new Font(label2.Font.Name, label2.Font.Size, label2.Font.Style ^ FontStyle.Italic);
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
