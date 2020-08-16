using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace ConsultaMedica
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            Thread thread = new Thread(new ThreadStart(splashScreen));
            thread.Start();

            Thread.Sleep(5000);/* 5000 milesegundos*/

            InitializeComponent();

            thread.Abort();
        }

        private void splashScreen()
        {
            Application.Run(new SplashScreen());
        }


        private void marcarHorárioToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<Form2>().Count() == 0)
            {
                Form2 form2 = new Form2();
                form2.MdiParent = this;
                form2.Show();
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
