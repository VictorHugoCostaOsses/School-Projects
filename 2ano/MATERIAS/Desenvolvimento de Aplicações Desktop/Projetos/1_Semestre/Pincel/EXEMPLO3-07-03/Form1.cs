using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace EXEMPLO3_07_03
{
    public partial class Form1 : Form
    {
        bool devePintar = false;
        Color cor;
        Graphics grafico;
        int tam = 10;
        public Form1()
        {
            InitializeComponent();
            cor = Color.Black;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            devePintar = true;
        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            devePintar = false;

        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            if(devePintar)
            {
                grafico = CreateGraphics();
                grafico.FillRectangle(new SolidBrush(cor), e.X, e.Y, tam, tam);

            }
        }

      

        

        private void button1_Click(object sender, EventArgs e)
        {

            cor = Color.Red;
            tam = 10;
        }

        private void button2_Click(object sender, EventArgs e)
        {

            cor = Color.Blue;
            tam = 10;
        }

        private void button3_Click(object sender, EventArgs e)
        {

            cor = Color.Yellow;
            tam = 10;
        }

        private void button4_Click(object sender, EventArgs e)
        {

            cor = Color.Orange;
            tam = 10;
        }

        private void button5_Click(object sender, EventArgs e)
        {

            cor = Color.Green;
            tam = 10;
        }

        private void button6_Click(object sender, EventArgs e)
        {

            cor = Color.White;
            tam = 50;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            BackColor = Color.White;
 
        }

        private void button8_Click(object sender, EventArgs e)
        {
            cor = Color.Black;
            tam = 10;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            cor = Color.Brown;
            tam = 10;
        }
    }
}
