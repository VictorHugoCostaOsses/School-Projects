using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ConsultaMedica
{
    public partial class SplashScreen : Form
    {
        public SplashScreen()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            progressBar1.Increment(1); /*incremente de 1 em 1 da barra*/
            /* O tick é o laco de repetição - a cada tempo ele aciona e aumenta de 1 em 1 a progress bar */
            if (progressBar1.Value == 100)
            {
                timer1.Stop(); /*100 e o valor maximo da barra */
                /*Desliga o timer*/
            }
        }

        private void SplashScreen_Load(object sender, EventArgs e)
        {

        }
    }
}
