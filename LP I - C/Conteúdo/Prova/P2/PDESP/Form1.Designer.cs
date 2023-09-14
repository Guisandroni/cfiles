namespace PDESP
{
    partial class frmPrincipal
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.mnsMenu = new System.Windows.Forms.MenuStrip();
            this.cadastrosToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.tipoDeDespesaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.membroFamiliarToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.despesasToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sobreToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sairToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.mnsMenu.SuspendLayout();
            this.SuspendLayout();
            // 
            // mnsMenu
            // 
            this.mnsMenu.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.cadastrosToolStripMenuItem,
            this.despesasToolStripMenuItem,
            this.sobreToolStripMenuItem,
            this.sairToolStripMenuItem});
            this.mnsMenu.Location = new System.Drawing.Point(0, 0);
            this.mnsMenu.Name = "mnsMenu";
            this.mnsMenu.Size = new System.Drawing.Size(497, 24);
            this.mnsMenu.TabIndex = 0;
            this.mnsMenu.Text = "menuStrip1";
            // 
            // cadastrosToolStripMenuItem
            // 
            this.cadastrosToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.tipoDeDespesaToolStripMenuItem,
            this.membroFamiliarToolStripMenuItem});
            this.cadastrosToolStripMenuItem.Name = "cadastrosToolStripMenuItem";
            this.cadastrosToolStripMenuItem.Size = new System.Drawing.Size(71, 20);
            this.cadastrosToolStripMenuItem.Text = "Cadastros";
            // 
            // tipoDeDespesaToolStripMenuItem
            // 
            this.tipoDeDespesaToolStripMenuItem.Name = "tipoDeDespesaToolStripMenuItem";
            this.tipoDeDespesaToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.tipoDeDespesaToolStripMenuItem.Text = "Tipo de Despesa";
            this.tipoDeDespesaToolStripMenuItem.Click += new System.EventHandler(this.tipoDeDespesaToolStripMenuItem_Click);
            // 
            // membroFamiliarToolStripMenuItem
            // 
            this.membroFamiliarToolStripMenuItem.Name = "membroFamiliarToolStripMenuItem";
            this.membroFamiliarToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.membroFamiliarToolStripMenuItem.Text = "Membro Familiar";
            this.membroFamiliarToolStripMenuItem.Click += new System.EventHandler(this.membroFamiliarToolStripMenuItem_Click);
            // 
            // despesasToolStripMenuItem
            // 
            this.despesasToolStripMenuItem.Name = "despesasToolStripMenuItem";
            this.despesasToolStripMenuItem.Size = new System.Drawing.Size(67, 20);
            this.despesasToolStripMenuItem.Text = "Despesas";
            this.despesasToolStripMenuItem.Click += new System.EventHandler(this.despesasToolStripMenuItem_Click);
            // 
            // sobreToolStripMenuItem
            // 
            this.sobreToolStripMenuItem.Name = "sobreToolStripMenuItem";
            this.sobreToolStripMenuItem.Size = new System.Drawing.Size(49, 20);
            this.sobreToolStripMenuItem.Text = "Sobre";
            // 
            // sairToolStripMenuItem
            // 
            this.sairToolStripMenuItem.Name = "sairToolStripMenuItem";
            this.sairToolStripMenuItem.Size = new System.Drawing.Size(38, 20);
            this.sairToolStripMenuItem.Text = "Sair";
            this.sairToolStripMenuItem.Click += new System.EventHandler(this.sairToolStripMenuItem_Click);
            // 
            // frmPrincipal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(497, 413);
            this.Controls.Add(this.mnsMenu);
            this.MainMenuStrip = this.mnsMenu;
            this.Name = "frmPrincipal";
            this.Text = "Controle de Despesas Familiar";
            this.Load += new System.EventHandler(this.frmPrincipal_Load);
            this.mnsMenu.ResumeLayout(false);
            this.mnsMenu.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip mnsMenu;
        private System.Windows.Forms.ToolStripMenuItem cadastrosToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem tipoDeDespesaToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem membroFamiliarToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem despesasToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sobreToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sairToolStripMenuItem;
    }
}

