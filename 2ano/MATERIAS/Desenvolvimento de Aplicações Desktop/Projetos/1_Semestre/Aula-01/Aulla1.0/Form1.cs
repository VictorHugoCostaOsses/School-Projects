using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Aulla1._0
{
    public partial class form1 : Form
    {
        public form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Butaum.Text = "sda";
        }

        private void label1_DoubleClick(object sender, EventArgs e)
        {
            button1.Text = "dsad";
        }

        private void form1_Load(object sender, EventArgs e)
        {

        }
    }
}
