﻿namespace CcomBD
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.arquivoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.cadastrarAlunosToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.cadastrarPalestrantesToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.frequenciaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.relatóriosToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.arquivoToolStripMenuItem,
            this.frequenciaToolStripMenuItem,
            this.relatóriosToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // arquivoToolStripMenuItem
            // 
            this.arquivoToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.cadastrarAlunosToolStripMenuItem,
            this.cadastrarPalestrantesToolStripMenuItem});
            this.arquivoToolStripMenuItem.Name = "arquivoToolStripMenuItem";
            this.arquivoToolStripMenuItem.Size = new System.Drawing.Size(61, 20);
            this.arquivoToolStripMenuItem.Text = "Arquivo";
            this.arquivoToolStripMenuItem.Click += new System.EventHandler(this.arquivoToolStripMenuItem_Click);
            // 
            // cadastrarAlunosToolStripMenuItem
            // 
            this.cadastrarAlunosToolStripMenuItem.Name = "cadastrarAlunosToolStripMenuItem";
            this.cadastrarAlunosToolStripMenuItem.Size = new System.Drawing.Size(190, 22);
            this.cadastrarAlunosToolStripMenuItem.Text = "Cadastrar Alunos";
            this.cadastrarAlunosToolStripMenuItem.Click += new System.EventHandler(this.cadastrarAlunosToolStripMenuItem_Click);
            // 
            // cadastrarPalestrantesToolStripMenuItem
            // 
            this.cadastrarPalestrantesToolStripMenuItem.Name = "cadastrarPalestrantesToolStripMenuItem";
            this.cadastrarPalestrantesToolStripMenuItem.Size = new System.Drawing.Size(190, 22);
            this.cadastrarPalestrantesToolStripMenuItem.Text = "Cadastrar Palestrantes";
            this.cadastrarPalestrantesToolStripMenuItem.Click += new System.EventHandler(this.cadastrarPalestrantesToolStripMenuItem_Click);
            // 
            // frequenciaToolStripMenuItem
            // 
            this.frequenciaToolStripMenuItem.Name = "frequenciaToolStripMenuItem";
            this.frequenciaToolStripMenuItem.Size = new System.Drawing.Size(77, 20);
            this.frequenciaToolStripMenuItem.Text = "Frequencia";
            this.frequenciaToolStripMenuItem.Click += new System.EventHandler(this.frequenciaToolStripMenuItem_Click);
            // 
            // relatóriosToolStripMenuItem
            // 
            this.relatóriosToolStripMenuItem.Name = "relatóriosToolStripMenuItem";
            this.relatóriosToolStripMenuItem.Size = new System.Drawing.Size(71, 20);
            this.relatóriosToolStripMenuItem.Text = "Relatórios";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.menuStrip1);
            this.IsMdiContainer = true;
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Controle de Presença";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem arquivoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cadastrarAlunosToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cadastrarPalestrantesToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem frequenciaToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem relatóriosToolStripMenuItem;
    }
}

