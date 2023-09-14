namespace PDESP
{
    partial class frmMembro
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmMembro));
            this.bnvMembro = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.tbMembro = new System.Windows.Forms.TabControl();
            this.DADOS = new System.Windows.Forms.TabPage();
            this.dgvMembro = new System.Windows.Forms.DataGridView();
            this.DETALHES = new System.Windows.Forms.TabPage();
            this.cbxParente = new System.Windows.Forms.ComboBox();
            this.txtPapelMembro = new System.Windows.Forms.Label();
            this.txtPapel = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtNomeMembro = new System.Windows.Forms.TextBox();
            this.txtIdMembro = new System.Windows.Forms.TextBox();
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.btnIncluir = new System.Windows.Forms.ToolStripButton();
            this.btnExcluir = new System.Windows.Forms.ToolStripButton();
            this.btnSalvar = new System.Windows.Forms.ToolStripButton();
            this.btnCancelar = new System.Windows.Forms.ToolStripButton();
            this.btnAlterar = new System.Windows.Forms.ToolStripButton();
            this.btnFechar = new System.Windows.Forms.ToolStripButton();
            ((System.ComponentModel.ISupportInitialize)(this.bnvMembro)).BeginInit();
            this.bnvMembro.SuspendLayout();
            this.tbMembro.SuspendLayout();
            this.DADOS.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvMembro)).BeginInit();
            this.DETALHES.SuspendLayout();
            this.SuspendLayout();
            // 
            // bnvMembro
            // 
            this.bnvMembro.AddNewItem = null;
            this.bnvMembro.CountItem = this.bindingNavigatorCountItem;
            this.bnvMembro.DeleteItem = null;
            this.bnvMembro.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem,
            this.bindingNavigatorMovePreviousItem,
            this.bindingNavigatorSeparator,
            this.bindingNavigatorPositionItem,
            this.bindingNavigatorCountItem,
            this.bindingNavigatorSeparator1,
            this.bindingNavigatorMoveNextItem,
            this.bindingNavigatorMoveLastItem,
            this.bindingNavigatorSeparator2,
            this.btnIncluir,
            this.btnExcluir,
            this.btnSalvar,
            this.btnCancelar,
            this.btnAlterar,
            this.btnFechar});
            this.bnvMembro.Location = new System.Drawing.Point(0, 0);
            this.bnvMembro.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.bnvMembro.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.bnvMembro.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.bnvMembro.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.bnvMembro.Name = "bnvMembro";
            this.bnvMembro.PositionItem = this.bindingNavigatorPositionItem;
            this.bnvMembro.Size = new System.Drawing.Size(651, 25);
            this.bnvMembro.TabIndex = 2;
            this.bnvMembro.Text = "bindingNavigator1";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(37, 22);
            this.bindingNavigatorCountItem.Text = "de {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Total number of items";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 25);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Position";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 23);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Current position";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator1";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 25);
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 25);
            // 
            // tbMembro
            // 
            this.tbMembro.Controls.Add(this.DADOS);
            this.tbMembro.Controls.Add(this.DETALHES);
            this.tbMembro.Location = new System.Drawing.Point(24, 44);
            this.tbMembro.Name = "tbMembro";
            this.tbMembro.SelectedIndex = 0;
            this.tbMembro.Size = new System.Drawing.Size(517, 269);
            this.tbMembro.TabIndex = 3;
            // 
            // DADOS
            // 
            this.DADOS.Controls.Add(this.dgvMembro);
            this.DADOS.Location = new System.Drawing.Point(4, 22);
            this.DADOS.Name = "DADOS";
            this.DADOS.Padding = new System.Windows.Forms.Padding(3);
            this.DADOS.Size = new System.Drawing.Size(509, 243);
            this.DADOS.TabIndex = 0;
            this.DADOS.Text = "DADOS";
            this.DADOS.UseVisualStyleBackColor = true;
            // 
            // dgvMembro
            // 
            this.dgvMembro.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvMembro.Location = new System.Drawing.Point(6, 6);
            this.dgvMembro.Name = "dgvMembro";
            this.dgvMembro.Size = new System.Drawing.Size(422, 231);
            this.dgvMembro.TabIndex = 0;
            // 
            // DETALHES
            // 
            this.DETALHES.Controls.Add(this.cbxParente);
            this.DETALHES.Controls.Add(this.txtPapelMembro);
            this.DETALHES.Controls.Add(this.txtPapel);
            this.DETALHES.Controls.Add(this.label2);
            this.DETALHES.Controls.Add(this.label1);
            this.DETALHES.Controls.Add(this.txtNomeMembro);
            this.DETALHES.Controls.Add(this.txtIdMembro);
            this.DETALHES.Location = new System.Drawing.Point(4, 22);
            this.DETALHES.Name = "DETALHES";
            this.DETALHES.Padding = new System.Windows.Forms.Padding(3);
            this.DETALHES.Size = new System.Drawing.Size(509, 243);
            this.DETALHES.TabIndex = 1;
            this.DETALHES.Text = "DETALHES";
            this.DETALHES.UseVisualStyleBackColor = true;
            // 
            // cbxParente
            // 
            this.cbxParente.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cbxParente.FormattingEnabled = true;
            this.cbxParente.Items.AddRange(new object[] {
            "Pai",
            "Mãe",
            "Filho(a)",
            "Tio(a)",
            "Avô",
            "Avó"});
            this.cbxParente.Location = new System.Drawing.Point(170, 175);
            this.cbxParente.Name = "cbxParente";
            this.cbxParente.Size = new System.Drawing.Size(121, 21);
            this.cbxParente.TabIndex = 7;
            // 
            // txtPapelMembro
            // 
            this.txtPapelMembro.AutoSize = true;
            this.txtPapelMembro.Location = new System.Drawing.Point(46, 155);
            this.txtPapelMembro.Name = "txtPapelMembro";
            this.txtPapelMembro.Size = new System.Drawing.Size(75, 13);
            this.txtPapelMembro.TabIndex = 6;
            this.txtPapelMembro.Text = "Papel Membro";
            // 
            // txtPapel
            // 
            this.txtPapel.Enabled = false;
            this.txtPapel.Location = new System.Drawing.Point(170, 148);
            this.txtPapel.Name = "txtPapel";
            this.txtPapel.Size = new System.Drawing.Size(286, 20);
            this.txtPapel.TabIndex = 5;
            this.txtPapel.TabStop = false;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(46, 111);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "Nome";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(46, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(56, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "id Membro";
            // 
            // txtNomeMembro
            // 
            this.txtNomeMembro.Enabled = false;
            this.txtNomeMembro.Location = new System.Drawing.Point(170, 104);
            this.txtNomeMembro.Name = "txtNomeMembro";
            this.txtNomeMembro.Size = new System.Drawing.Size(286, 20);
            this.txtNomeMembro.TabIndex = 0;
            this.txtNomeMembro.TabStop = false;
            // 
            // txtIdMembro
            // 
            this.txtIdMembro.Enabled = false;
            this.txtIdMembro.Location = new System.Drawing.Point(170, 53);
            this.txtIdMembro.Name = "txtIdMembro";
            this.txtIdMembro.Size = new System.Drawing.Size(286, 20);
            this.txtIdMembro.TabIndex = 3;
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveFirstItem.Text = "Move first";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMovePreviousItem.Text = "Move previous";
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveNextItem.Text = "Move next";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveLastItem.Text = "Move last";
            // 
            // btnIncluir
            // 
            this.btnIncluir.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnIncluir.Image = ((System.Drawing.Image)(resources.GetObject("btnIncluir.Image")));
            this.btnIncluir.Name = "btnIncluir";
            this.btnIncluir.RightToLeftAutoMirrorImage = true;
            this.btnIncluir.Size = new System.Drawing.Size(23, 22);
            this.btnIncluir.Text = "Add new";
            this.btnIncluir.Click += new System.EventHandler(this.btnIncluir_Click);
            // 
            // btnExcluir
            // 
            this.btnExcluir.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnExcluir.Image = global::PDESP.Properties.Resources.icons8_lixo_48;
            this.btnExcluir.Name = "btnExcluir";
            this.btnExcluir.RightToLeftAutoMirrorImage = true;
            this.btnExcluir.Size = new System.Drawing.Size(23, 22);
            this.btnExcluir.Text = "Delete";
            this.btnExcluir.Click += new System.EventHandler(this.btnExcluir_Click);
            // 
            // btnSalvar
            // 
            this.btnSalvar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnSalvar.Image = global::PDESP.Properties.Resources.icons8_salvar_48;
            this.btnSalvar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnSalvar.Name = "btnSalvar";
            this.btnSalvar.Size = new System.Drawing.Size(23, 22);
            this.btnSalvar.Text = "Salvar";
            this.btnSalvar.Click += new System.EventHandler(this.btnSalvar_Click_1);
            // 
            // btnCancelar
            // 
            this.btnCancelar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnCancelar.Image = global::PDESP.Properties.Resources.icons8_voltar_48;
            this.btnCancelar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnCancelar.Name = "btnCancelar";
            this.btnCancelar.Size = new System.Drawing.Size(23, 22);
            this.btnCancelar.Text = "Cancelar";
            this.btnCancelar.Click += new System.EventHandler(this.btnCancelar_Click);
            // 
            // btnAlterar
            // 
            this.btnAlterar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnAlterar.Image = global::PDESP.Properties.Resources.icons8_sincronizar_48;
            this.btnAlterar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnAlterar.Name = "btnAlterar";
            this.btnAlterar.Size = new System.Drawing.Size(23, 22);
            this.btnAlterar.Text = "Alterar";
            this.btnAlterar.Click += new System.EventHandler(this.btnAlterar_Click);
            // 
            // btnFechar
            // 
            this.btnFechar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnFechar.Image = global::PDESP.Properties.Resources.icons8_excluir_48;
            this.btnFechar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnFechar.Name = "btnFechar";
            this.btnFechar.Size = new System.Drawing.Size(23, 22);
            this.btnFechar.Text = "Fechar";
            this.btnFechar.Click += new System.EventHandler(this.btnFechar_Click);
            // 
            // frmMembro
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(651, 365);
            this.Controls.Add(this.bnvMembro);
            this.Controls.Add(this.tbMembro);
            this.Name = "frmMembro";
            this.Text = "frmMembro";
            this.Load += new System.EventHandler(this.frmMembro_Load);
            ((System.ComponentModel.ISupportInitialize)(this.bnvMembro)).EndInit();
            this.bnvMembro.ResumeLayout(false);
            this.bnvMembro.PerformLayout();
            this.tbMembro.ResumeLayout(false);
            this.DADOS.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dgvMembro)).EndInit();
            this.DETALHES.ResumeLayout(false);
            this.DETALHES.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.BindingNavigator bnvMembro;
        private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
        private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
        private System.Windows.Forms.ToolStripButton btnIncluir;
        private System.Windows.Forms.ToolStripButton btnExcluir;
        private System.Windows.Forms.ToolStripButton btnSalvar;
        private System.Windows.Forms.ToolStripButton btnCancelar;
        private System.Windows.Forms.ToolStripButton btnAlterar;
        private System.Windows.Forms.ToolStripButton btnFechar;
        private System.Windows.Forms.TabControl tbMembro;
        private System.Windows.Forms.TabPage DADOS;
        private System.Windows.Forms.DataGridView dgvMembro;
        private System.Windows.Forms.TabPage DETALHES;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtNomeMembro;
        private System.Windows.Forms.TextBox txtIdMembro;
        private System.Windows.Forms.Label txtPapelMembro;
        private System.Windows.Forms.TextBox txtPapel;
        private System.Windows.Forms.ComboBox cbxParente;
    }
}