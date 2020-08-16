﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Cronometro
{
    public partial class Form1 : Form
    {
        
        DateTime inicio, fim;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
         

        }

        private void button3_Click(object sender, EventArgs e)
        {
            
            label1.Text = "00:00:00";
            timer1.Enabled = false;
           
        }

        private void timer1_Tick(object sender, EventArgs e)
        {

           
          

            fim = DateTime.Now;
            TimeSpan dif = fim.Subtract(inicio);
            label1.Text = dif.ToString("hh\\:mm\\:ss");
          
        }

        private void button2_Click(object sender, EventArgs e)
        {
      
            timer1.Stop();
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            inicio = DateTime.Now;
            timer1.Enabled = true;
            
            
        }
    }
}
