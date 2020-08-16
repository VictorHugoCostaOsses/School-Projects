using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AtividadeAvaliativa
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void aSToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void médiaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();
            form2.BackColor = Color.Blue; 
            form2.Show();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void vcdzToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void sdfToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if(Application.OpenForms ["Form2"] == null)
            {
                Form2 form = new Form2();
                form.Show();
            }
           
        }
    }
}
