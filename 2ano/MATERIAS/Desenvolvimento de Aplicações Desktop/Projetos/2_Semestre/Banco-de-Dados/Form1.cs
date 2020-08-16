using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BandoDeDados
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void cToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void cadastrarAlunosToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if(Application.OpenForms.OfType<Form2>().Count() == 0)
            {
                Form2 form = new Form2();
                form.MdiParent = this;
                form.Show();
            }
           
        }

        private void cadastrarPalestrasToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<Form3>().Count() == 0)
            {
                Form3 form = new Form3();
                form.MdiParent = this;
                form.Show();
            }
        }

        private void frequenciaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<Form4>().Count() == 0)
            {
                Form4 form = new Form4();
                form.MdiParent = this;
                form.Show();
            }
        }

        private void atualizarExclusãoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<Form5>().Count() == 0)
            {
                Form5 form = new Form5();
                form.MdiParent = this;
                form.Show();
            }
        }

        private void relatórioPresencaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (Application.OpenForms.OfType<Form6>().Count() == 0)
            {
                Form6 form = new Form6();
                form.MdiParent = this;
                form.Show();
            }
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void arquivoToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }
    }
}
