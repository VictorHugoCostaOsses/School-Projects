using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp5
{
    public partial class Form1 : Form
    {
       
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            if(textBox1.Text == "1234")
            {
                if(Application.OpenForms ["Form2"] == null)
                {
                    Form2 form = new Form2();
                    form.Show();
                }

            }
            else
            {
                   MessageBox.Show("Senha Incorreta", "Aviso", MessageBoxButtons.OK, MessageBoxIcon.Warning);    
            }
        }
    }
}
