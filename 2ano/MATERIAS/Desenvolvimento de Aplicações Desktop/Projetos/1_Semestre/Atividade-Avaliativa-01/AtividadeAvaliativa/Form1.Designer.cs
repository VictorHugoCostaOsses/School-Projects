namespace AtividadeAvaliativa
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
            this.aSToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aSToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.médiaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip2 = new System.Windows.Forms.MenuStrip();
            this.sdfToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.menuStrip2.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.aSToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 24);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // aSToolStripMenuItem
            // 
            this.aSToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.aSToolStripMenuItem1});
            this.aSToolStripMenuItem.Name = "aSToolStripMenuItem";
            this.aSToolStripMenuItem.Size = new System.Drawing.Size(50, 20);
            this.aSToolStripMenuItem.Text = "Menu";
            this.aSToolStripMenuItem.Click += new System.EventHandler(this.aSToolStripMenuItem_Click);
            // 
            // aSToolStripMenuItem1
            // 
            this.aSToolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.médiaToolStripMenuItem});
            this.aSToolStripMenuItem1.Name = "aSToolStripMenuItem1";
            this.aSToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.aSToolStripMenuItem1.Text = "Arquivo";
            // 
            // médiaToolStripMenuItem
            // 
            this.médiaToolStripMenuItem.Name = "médiaToolStripMenuItem";
            this.médiaToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.médiaToolStripMenuItem.Text = "Média";
            this.médiaToolStripMenuItem.Click += new System.EventHandler(this.médiaToolStripMenuItem_Click);
            // 
            // menuStrip2
            // 
            this.menuStrip2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.sdfToolStripMenuItem});
            this.menuStrip2.Location = new System.Drawing.Point(0, 0);
            this.menuStrip2.Name = "menuStrip2";
            this.menuStrip2.Size = new System.Drawing.Size(800, 24);
            this.menuStrip2.TabIndex = 1;
            this.menuStrip2.Text = "menuStrip2";
            // 
            // sdfToolStripMenuItem
            // 
            this.sdfToolStripMenuItem.Name = "sdfToolStripMenuItem";
            this.sdfToolStripMenuItem.Size = new System.Drawing.Size(35, 20);
            this.sdfToolStripMenuItem.Text = "sdf";
            this.sdfToolStripMenuItem.Click += new System.EventHandler(this.sdfToolStripMenuItem_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.menuStrip2);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.menuStrip2.ResumeLayout(false);
            this.menuStrip2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem aSToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem aSToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem médiaToolStripMenuItem;
        private System.Windows.Forms.MenuStrip menuStrip2;
        private System.Windows.Forms.ToolStripMenuItem sdfToolStripMenuItem;
    }
}

