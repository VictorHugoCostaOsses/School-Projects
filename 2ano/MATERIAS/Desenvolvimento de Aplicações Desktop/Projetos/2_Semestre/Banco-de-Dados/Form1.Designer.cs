﻿namespace BandoDeDados
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
            this.cadastrarPalestrasToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.frequenciaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.atualizarExclusãoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.relatórioPresencaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.arquivoToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 24);
            this.menuStrip1.TabIndex = 3;
            this.menuStrip1.Text = "menuStrip1";
            this.menuStrip1.ItemClicked += new System.Windows.Forms.ToolStripItemClickedEventHandler(this.menuStrip1_ItemClicked);
            // 
            // arquivoToolStripMenuItem
            // 
            this.arquivoToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.cadastrarAlunosToolStripMenuItem,
            this.cadastrarPalestrasToolStripMenuItem,
            this.frequenciaToolStripMenuItem,
            this.atualizarExclusãoToolStripMenuItem,
            this.relatórioPresencaToolStripMenuItem});
            this.arquivoToolStripMenuItem.Name = "arquivoToolStripMenuItem";
            this.arquivoToolStripMenuItem.Size = new System.Drawing.Size(61, 20);
            this.arquivoToolStripMenuItem.Text = "Arquivo";
            this.arquivoToolStripMenuItem.Click += new System.EventHandler(this.arquivoToolStripMenuItem_Click);
            // 
            // cadastrarAlunosToolStripMenuItem
            // 
            this.cadastrarAlunosToolStripMenuItem.Name = "cadastrarAlunosToolStripMenuItem";
            this.cadastrarAlunosToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.cadastrarAlunosToolStripMenuItem.Text = "Cadastrar Alunos";
            this.cadastrarAlunosToolStripMenuItem.Click += new System.EventHandler(this.cadastrarAlunosToolStripMenuItem_Click);
            // 
            // cadastrarPalestrasToolStripMenuItem
            // 
            this.cadastrarPalestrasToolStripMenuItem.Name = "cadastrarPalestrasToolStripMenuItem";
            this.cadastrarPalestrasToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.cadastrarPalestrasToolStripMenuItem.Text = "Cadastrar Palestras";
            this.cadastrarPalestrasToolStripMenuItem.Click += new System.EventHandler(this.cadastrarPalestrasToolStripMenuItem_Click);
            // 
            // frequenciaToolStripMenuItem
            // 
            this.frequenciaToolStripMenuItem.Name = "frequenciaToolStripMenuItem";
            this.frequenciaToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.frequenciaToolStripMenuItem.Text = "Frequencia";
            this.frequenciaToolStripMenuItem.Click += new System.EventHandler(this.frequenciaToolStripMenuItem_Click);
            // 
            // atualizarExclusãoToolStripMenuItem
            // 
            this.atualizarExclusãoToolStripMenuItem.Name = "atualizarExclusãoToolStripMenuItem";
            this.atualizarExclusãoToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.atualizarExclusãoToolStripMenuItem.Text = "Atualizar/Exclusão";
            this.atualizarExclusãoToolStripMenuItem.Click += new System.EventHandler(this.atualizarExclusãoToolStripMenuItem_Click);
            // 
            // relatórioPresencaToolStripMenuItem
            // 
            this.relatórioPresencaToolStripMenuItem.Name = "relatórioPresencaToolStripMenuItem";
            this.relatórioPresencaToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.relatórioPresencaToolStripMenuItem.Text = "RelatórioPresenca";
            this.relatórioPresencaToolStripMenuItem.Click += new System.EventHandler(this.relatórioPresencaToolStripMenuItem_Click);
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
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem arquivoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cadastrarAlunosToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cadastrarPalestrasToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem frequenciaToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem atualizarExclusãoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem relatórioPresencaToolStripMenuItem;
    }
}

