using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Excecoes
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void calcularÓleoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if(Application.OpenForms.OfType < Form2>().Count() == 0)
            {
                Form2 form2 = new Form2();
                form2.MdiParent = this;
                form2.Show();

            }


        }

        private void calcularCombustívelToolStripMenuItem_Click(object sender, EventArgs e)
        {

            if (Application.OpenForms.OfType<Form3>().Count() == 0)
            {
            Form3 form3 = new Form3();
            form3.MdiParent = this;
            form3.Show();
            }

        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void ajudaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<AboutBox1>().Count() == 0)
            {
            AboutBox1 Matheus = new AboutBox1();
            /*Matheus.MdiParent = this;*/
            Matheus.ShowDialog(); // ShowDialog - Deixa em destaque  
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
