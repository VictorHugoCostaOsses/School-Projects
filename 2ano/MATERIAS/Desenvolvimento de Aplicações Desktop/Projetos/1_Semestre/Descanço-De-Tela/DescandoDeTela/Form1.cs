using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DescandoDeTela
{
    public partial class Form1 : Form
    {
      
        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Location = new Point(label1.Location.X + 200, label1.Location.Y);
            if(label1.Location.X>this.Width)
            {
                label1.Location = new Point( 0 - label1.Width , label1.Location.Y+20);
            }

            if(label1.Location.Y > this.Height)
            {
                label1.Location = new Point(0, 0);
            }

        }

        private void label1_Click(object sender, EventArgs e)

        { 

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
