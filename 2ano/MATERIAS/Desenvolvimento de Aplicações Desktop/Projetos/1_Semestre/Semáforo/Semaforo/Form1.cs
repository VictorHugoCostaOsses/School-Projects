using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Semaforo
{
    public partial class Form1 : Form
    {
        int a = 0;
        public Form1()
        {
            
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            a++;

            if(a <= 20)
            {
                panel4.BackColor = Color.Green;
            }
            else if( a <= 30 && a > 20)
                {
                panel3.BackColor = Color.Yellow;
                panel4.BackColor = Color.Gray;

            }
            else if(a <=40 && a > 30)
            {
                panel2.BackColor = Color.Red;
                panel3.BackColor = Color.Gray;
                
            }
            else if (a > 40)
            {
                panel2.BackColor = Color.Gray;
                a = 0;
            }

            
        }

        private void panel2_Paint(object sender, PaintEventArgs e)
        {
            
        }

        private void Form1_Activated(object sender, EventArgs e)
        {
            timer1.Start();
            panel2.BackColor = Color.Gray;
            panel3.BackColor = Color.Gray;
            panel4.BackColor = Color.Gray;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            GraphicsPath redondo = new GraphicsPath();
            redondo.AddEllipse(0, 0, 60, 60);
            panel2.Region = new Region(redondo);
            panel3.Region = new Region(redondo);
            panel4.Region = new Region(redondo);
        }
    }
}
