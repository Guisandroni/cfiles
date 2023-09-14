namespace PDESP
{
    partial class frmTipoDespesa
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmTipoDespesa));
            this.tbTipoDespesa = new System.Windows.Forms.TabControl();
            this.DADOS = new System.Windows.Forms.TabPage();
            this.dgvTipoDespesa = new System.Windows.Forms.DataGridView();
            this.DETALHES = new System.Windows.Forms.TabPage();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtNomeDespesa = new System.Windows.Forms.TextBox();
            this.txtIdDespesa = new System.Windows.Forms.TextBox();
            this.bnvTipoDespesa = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.btnIncluir = new System.Windows.Forms.ToolStripButton();
            this.btnExcluir = new System.Windows.Forms.ToolStripButton();
            this.btnSalvar = new System.Windows.Forms.ToolStripButton();
            this.btnCancelar = new System.Windows.Forms.ToolStripButton();
            this.btnAlterar = new System.Windows.Forms.ToolStripButton();
            this.btnFechar = new System.Windows.Forms.ToolStripButton();
            this.tbTipoDespesa.SuspendLayout();
            this.DADOS.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvTipoDespesa)).BeginInit();
            this.DETALHES.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.bnvTipoDespesa)).BeginInit();
            this.bnvTipoDespesa.SuspendLayout();
            this.SuspendLayout();
            // 
            // tbTipoDespesa
            // 
            this.tbTipoDespesa.Controls.Add(this.DADOS);
            this.tbTipoDespesa.Controls.Add(this.DETALHES);
            this.tbTipoDespesa.Location = new System.Drawing.Point(43, 44);
            this.tbTipoDespesa.Name = "tbTipoDespesa";
            this.tbTipoDespesa.SelectedIndex = 0;
            this.tbTipoDespesa.Size = new System.Drawing.Size(517, 269);
            this.tbTipoDespesa.TabIndex = 1;
            // 
            // DADOS
            // 
            this.DADOS.Controls.Add(this.dgvTipoDespesa);
            this.DADOS.Location = new System.Drawing.Point(4, 22);
            this.DADOS.Name = "DADOS";
            this.DADOS.Padding = new System.Windows.Forms.Padding(3);
            this.DADOS.Size = new System.Drawing.Size(509, 243);
            this.DADOS.TabIndex = 0;
            this.DADOS.Text = "DADOS";
            this.DADOS.UseVisualStyleBackColor = true;
            // 
            // dgvTipoDespesa
            // 
            this.dgvTipoDespesa.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvTipoDespesa.Location = new System.Drawing.Point(6, 6);
            this.dgvTipoDespesa.Name = "dgvTipoDespesa";
            this.dgvTipoDespesa.Size = new System.Drawing.Size(422, 231);
            this.dgvTipoDespesa.TabIndex = 0;
            // 
            // DETALHES
            // 
            this.DETALHES.Controls.Add(this.label2);
            this.DETALHES.Controls.Add(this.label1);
            this.DETALHES.Controls.Add(this.txtNomeDespesa);
            this.DETALHES.Controls.Add(this.txtIdDespesa);
            this.DETALHES.Location = new System.Drawing.Point(4, 22);
            this.DETALHES.Name = "DETALHES";
            this.DETALHES.Padding = new System.Windows.Forms.Padding(3);
            this.DETALHES.Size = new System.Drawing.Size(509, 243);
            this.DETALHES.TabIndex = 1;
            this.DETALHES.Text = "DETALHES";
            this.DETALHES.UseVisualStyleBackColor = true;
            this.DETALHES.Click += new System.EventHandler(this.DETALHES_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(46, 111);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(102, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "nome Tipo Despesa";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(46, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(84, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "id Tipo Despesa";
            // 
            // txtNomeDespesa
            // 
            this.txtNomeDespesa.Enabled = false;
            this.txtNomeDespesa.Location = new System.Drawing.Point(170, 104);
            this.txtNomeDespesa.Name = "txtNomeDespesa";
            this.txtNomeDespesa.Size = new System.Drawing.Size(286, 20);
            this.txtNomeDespesa.TabIndex = 0;
            this.txtNomeDespesa.TabStop = false;
            // 
            // txtIdDespesa
            // 
            this.txtIdDespesa.Enabled = false;
            this.txtIdDespesa.Location = new System.Drawing.Point(170, 53);
            this.txtIdDespesa.Name = "txtIdDespesa";
            this.txtIdDespesa.Size = new System.Drawing.Size(286, 20);
            this.txtIdDespesa.TabIndex = 3;
            // 
            // bnvTipoDespesa
            // 
            this.bnvTipoDespesa.AddNewItem = null;
            this.bnvTipoDespesa.CountItem = this.bindingNavigatorCountItem;
            this.bnvTipoDespesa.DeleteItem = null;
            this.bnvTipoDespesa.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.bnvTipoDespesa.Location = new System.Drawing.Point(0, 0);
            this.bnvTipoDespesa.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.bnvTipoDespesa.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.bnvTipoDespesa.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.bnvTipoDespesa.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.bnvTipoDespesa.Name = "bnvTipoDespesa";
            this.bnvTipoDespesa.PositionItem = this.bindingNavigatorPositionItem;
            this.bnvTipoDespesa.Size = new System.Drawing.Size(602, 25);
            this.bnvTipoDespesa.TabIndex = 1;
            this.bnvTipoDespesa.Text = "bindingNavigator1";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(37, 22);
            this.bindingNavigatorCountItem.Text = "de {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Total number of items";
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
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 25);
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
            this.btnSalvar.Click += new System.EventHandler(this.btnSalvar_Click);
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
            // frmTipoDespesa
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(602, 369);
            this.Controls.Add(this.bnvTipoDespesa);
            this.Controls.Add(this.tbTipoDespesa);
            this.Name = "frmTipoDespesa";
            this.Text = "Tipo de Despesa";
            this.Load += new System.EventHandler(this.frmTipoDespesa_Load);
            this.tbTipoDespesa.ResumeLayout(false);
            this.DADOS.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dgvTipoDespesa)).EndInit();
            this.DETALHES.ResumeLayout(false);
            this.DETALHES.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.bnvTipoDespesa)).EndInit();
            this.bnvTipoDespesa.ResumeLayout(false);
            this.bnvTipoDespesa.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TabControl tbTipoDespesa;
        private System.Windows.Forms.TabPage DADOS;
        private System.Windows.Forms.TabPage DETALHES;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtNomeDespesa;
        private System.Windows.Forms.TextBox txtIdDespesa;
        private System.Windows.Forms.BindingNavigator bnvTipoDespesa;
        private System.Windows.Forms.ToolStripButton btnIncluir;
        private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
        private System.Windows.Forms.ToolStripButton btnExcluir;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
        private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
        private System.Windows.Forms.DataGridView dgvTipoDespesa;
        private System.Windows.Forms.ToolStripButton btnSalvar;
        private System.Windows.Forms.ToolStripButton btnCancelar;
        private System.Windows.Forms.ToolStripButton btnAlterar;
        private System.Windows.Forms.ToolStripButton btnFechar;
    }
}