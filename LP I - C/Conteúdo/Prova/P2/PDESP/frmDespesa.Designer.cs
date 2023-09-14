namespace PDESP
{
    partial class frmDespesa
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmDespesa));
            this.bnvDespesa = new System.Windows.Forms.BindingNavigator(this.components);
            this.btnIncluir = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.btnExcluir = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.btnSalvar = new System.Windows.Forms.ToolStripButton();
            this.btnCancelar = new System.Windows.Forms.ToolStripButton();
            this.btnAlterar = new System.Windows.Forms.ToolStripButton();
            this.btnFechar = new System.Windows.Forms.ToolStripButton();
            this.tbDespesa = new System.Windows.Forms.TabControl();
            this.DADOS = new System.Windows.Forms.TabPage();
            this.dgvDespesa = new System.Windows.Forms.DataGridView();
            this.DETALHES = new System.Windows.Forms.TabPage();
            this.lblOBS = new System.Windows.Forms.Label();
            this.lblValor = new System.Windows.Forms.Label();
            this.lblDespesa = new System.Windows.Forms.Label();
            this.lblMembro = new System.Windows.Forms.Label();
            this.lblData = new System.Windows.Forms.Label();
            this.txtObsDespesa = new System.Windows.Forms.TextBox();
            this.dtpDataDespesa = new System.Windows.Forms.DateTimePicker();
            this.mtxtValor = new System.Windows.Forms.MaskedTextBox();
            this.cbxTipoDespesa = new System.Windows.Forms.ComboBox();
            this.cbxMembro = new System.Windows.Forms.ComboBox();
            this.lblIDDESPESA = new System.Windows.Forms.Label();
            this.txtIdDespesa = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.bnvDespesa)).BeginInit();
            this.bnvDespesa.SuspendLayout();
            this.tbDespesa.SuspendLayout();
            this.DADOS.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dgvDespesa)).BeginInit();
            this.DETALHES.SuspendLayout();
            this.SuspendLayout();
            // 
            // bnvDespesa
            // 
            this.bnvDespesa.AddNewItem = this.btnIncluir;
            this.bnvDespesa.CountItem = this.bindingNavigatorCountItem;
            this.bnvDespesa.DeleteItem = this.btnExcluir;
            this.bnvDespesa.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.bnvDespesa.Location = new System.Drawing.Point(0, 0);
            this.bnvDespesa.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.bnvDespesa.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.bnvDespesa.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.bnvDespesa.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.bnvDespesa.Name = "bnvDespesa";
            this.bnvDespesa.PositionItem = this.bindingNavigatorPositionItem;
            this.bnvDespesa.Size = new System.Drawing.Size(404, 25);
            this.bnvDespesa.TabIndex = 0;
            this.bnvDespesa.Text = "bindingNavigator1";
            // 
            // btnIncluir
            // 
            this.btnIncluir.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnIncluir.Image = ((System.Drawing.Image)(resources.GetObject("btnIncluir.Image")));
            this.btnIncluir.Name = "btnIncluir";
            this.btnIncluir.RightToLeftAutoMirrorImage = true;
            this.btnIncluir.Size = new System.Drawing.Size(23, 22);
            this.btnIncluir.Text = "Incluir";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(37, 22);
            this.bindingNavigatorCountItem.Text = "de {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Número total de itens";
            // 
            // btnExcluir
            // 
            this.btnExcluir.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnExcluir.Image = global::PDESP.Properties.Resources.icons8_lixo_48;
            this.btnExcluir.Name = "btnExcluir";
            this.btnExcluir.RightToLeftAutoMirrorImage = true;
            this.btnExcluir.Size = new System.Drawing.Size(23, 22);
            this.btnExcluir.Text = "Excluir";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveFirstItem.Text = "Mover primeiro";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMovePreviousItem.Text = "Mover anterior";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 25);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Posição";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 23);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Posição atual";
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
            this.bindingNavigatorMoveNextItem.Text = "Mover próximo";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveLastItem.Text = "Mover último";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 25);
            // 
            // btnSalvar
            // 
            this.btnSalvar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnSalvar.Image = global::PDESP.Properties.Resources.icons8_salvar_48;
            this.btnSalvar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnSalvar.Name = "btnSalvar";
            this.btnSalvar.Size = new System.Drawing.Size(23, 22);
            this.btnSalvar.Text = "Salvar";
            // 
            // btnCancelar
            // 
            this.btnCancelar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnCancelar.Image = global::PDESP.Properties.Resources.icons8_voltar_48;
            this.btnCancelar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnCancelar.Name = "btnCancelar";
            this.btnCancelar.Size = new System.Drawing.Size(23, 22);
            this.btnCancelar.Text = "Cancelar";
            // 
            // btnAlterar
            // 
            this.btnAlterar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnAlterar.Image = global::PDESP.Properties.Resources.icons8_sincronizar_48;
            this.btnAlterar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnAlterar.Name = "btnAlterar";
            this.btnAlterar.Size = new System.Drawing.Size(23, 22);
            this.btnAlterar.Text = "Alterar";
            // 
            // btnFechar
            // 
            this.btnFechar.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.btnFechar.Image = global::PDESP.Properties.Resources.icons8_excluir_48;
            this.btnFechar.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.btnFechar.Name = "btnFechar";
            this.btnFechar.Size = new System.Drawing.Size(23, 22);
            this.btnFechar.Text = "Fechar";
            // 
            // tbDespesa
            // 
            this.tbDespesa.Controls.Add(this.DADOS);
            this.tbDespesa.Controls.Add(this.DETALHES);
            this.tbDespesa.Location = new System.Drawing.Point(0, 28);
            this.tbDespesa.Name = "tbDespesa";
            this.tbDespesa.SelectedIndex = 0;
            this.tbDespesa.Size = new System.Drawing.Size(404, 274);
            this.tbDespesa.TabIndex = 1;
            // 
            // DADOS
            // 
            this.DADOS.Controls.Add(this.dgvDespesa);
            this.DADOS.Location = new System.Drawing.Point(4, 22);
            this.DADOS.Name = "DADOS";
            this.DADOS.Padding = new System.Windows.Forms.Padding(3);
            this.DADOS.Size = new System.Drawing.Size(396, 248);
            this.DADOS.TabIndex = 0;
            this.DADOS.Text = "DADOS";
            this.DADOS.UseVisualStyleBackColor = true;
            // 
            // dgvDespesa
            // 
            this.dgvDespesa.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvDespesa.Location = new System.Drawing.Point(8, 6);
            this.dgvDespesa.Name = "dgvDespesa";
            this.dgvDespesa.Size = new System.Drawing.Size(382, 239);
            this.dgvDespesa.TabIndex = 0;
            // 
            // DETALHES
            // 
            this.DETALHES.Controls.Add(this.txtIdDespesa);
            this.DETALHES.Controls.Add(this.lblIDDESPESA);
            this.DETALHES.Controls.Add(this.lblOBS);
            this.DETALHES.Controls.Add(this.lblValor);
            this.DETALHES.Controls.Add(this.lblDespesa);
            this.DETALHES.Controls.Add(this.lblMembro);
            this.DETALHES.Controls.Add(this.lblData);
            this.DETALHES.Controls.Add(this.txtObsDespesa);
            this.DETALHES.Controls.Add(this.dtpDataDespesa);
            this.DETALHES.Controls.Add(this.mtxtValor);
            this.DETALHES.Controls.Add(this.cbxTipoDespesa);
            this.DETALHES.Controls.Add(this.cbxMembro);
            this.DETALHES.Location = new System.Drawing.Point(4, 22);
            this.DETALHES.Name = "DETALHES";
            this.DETALHES.Padding = new System.Windows.Forms.Padding(3);
            this.DETALHES.Size = new System.Drawing.Size(396, 248);
            this.DETALHES.TabIndex = 1;
            this.DETALHES.Text = "DETALHES";
            this.DETALHES.UseVisualStyleBackColor = true;
            // 
            // lblOBS
            // 
            this.lblOBS.AutoSize = true;
            this.lblOBS.Location = new System.Drawing.Point(27, 214);
            this.lblOBS.Name = "lblOBS";
            this.lblOBS.Size = new System.Drawing.Size(65, 13);
            this.lblOBS.TabIndex = 9;
            this.lblOBS.Text = "Observação";
            // 
            // lblValor
            // 
            this.lblValor.AutoSize = true;
            this.lblValor.Location = new System.Drawing.Point(27, 178);
            this.lblValor.Name = "lblValor";
            this.lblValor.Size = new System.Drawing.Size(31, 13);
            this.lblValor.TabIndex = 8;
            this.lblValor.Text = "Valor";
            // 
            // lblDespesa
            // 
            this.lblDespesa.AutoSize = true;
            this.lblDespesa.Location = new System.Drawing.Point(27, 138);
            this.lblDespesa.Name = "lblDespesa";
            this.lblDespesa.Size = new System.Drawing.Size(73, 13);
            this.lblDespesa.TabIndex = 7;
            this.lblDespesa.Text = "Tipo Despesa";
            // 
            // lblMembro
            // 
            this.lblMembro.AutoSize = true;
            this.lblMembro.Location = new System.Drawing.Point(27, 97);
            this.lblMembro.Name = "lblMembro";
            this.lblMembro.Size = new System.Drawing.Size(45, 13);
            this.lblMembro.TabIndex = 6;
            this.lblMembro.Text = "Membro";
            // 
            // lblData
            // 
            this.lblData.AutoSize = true;
            this.lblData.Location = new System.Drawing.Point(27, 58);
            this.lblData.Name = "lblData";
            this.lblData.Size = new System.Drawing.Size(30, 13);
            this.lblData.TabIndex = 5;
            this.lblData.Text = "Data";
            // 
            // txtObsDespesa
            // 
            this.txtObsDespesa.Location = new System.Drawing.Point(148, 211);
            this.txtObsDespesa.Name = "txtObsDespesa";
            this.txtObsDespesa.Size = new System.Drawing.Size(200, 20);
            this.txtObsDespesa.TabIndex = 4;
            // 
            // dtpDataDespesa
            // 
            this.dtpDataDespesa.Location = new System.Drawing.Point(148, 58);
            this.dtpDataDespesa.Name = "dtpDataDespesa";
            this.dtpDataDespesa.Size = new System.Drawing.Size(200, 20);
            this.dtpDataDespesa.TabIndex = 3;
            // 
            // mtxtValor
            // 
            this.mtxtValor.Location = new System.Drawing.Point(200, 175);
            this.mtxtValor.Mask = "999999,99";
            this.mtxtValor.Name = "mtxtValor";
            this.mtxtValor.Size = new System.Drawing.Size(100, 20);
            this.mtxtValor.TabIndex = 2;
            // 
            // cbxTipoDespesa
            // 
            this.cbxTipoDespesa.FormattingEnabled = true;
            this.cbxTipoDespesa.Location = new System.Drawing.Point(188, 135);
            this.cbxTipoDespesa.Name = "cbxTipoDespesa";
            this.cbxTipoDespesa.Size = new System.Drawing.Size(121, 21);
            this.cbxTipoDespesa.TabIndex = 1;
            // 
            // cbxMembro
            // 
            this.cbxMembro.FormattingEnabled = true;
            this.cbxMembro.Location = new System.Drawing.Point(188, 94);
            this.cbxMembro.Name = "cbxMembro";
            this.cbxMembro.Size = new System.Drawing.Size(121, 21);
            this.cbxMembro.TabIndex = 0;
            // 
            // lblIDDESPESA
            // 
            this.lblIDDESPESA.AutoSize = true;
            this.lblIDDESPESA.Location = new System.Drawing.Point(27, 22);
            this.lblIDDESPESA.Name = "lblIDDESPESA";
            this.lblIDDESPESA.Size = new System.Drawing.Size(61, 13);
            this.lblIDDESPESA.TabIndex = 10;
            this.lblIDDESPESA.Text = "Id Despesa";
            // 
            // txtIdDespesa
            // 
            this.txtIdDespesa.Location = new System.Drawing.Point(200, 19);
            this.txtIdDespesa.Name = "txtIdDespesa";
            this.txtIdDespesa.Size = new System.Drawing.Size(100, 20);
            this.txtIdDespesa.TabIndex = 11;
            // 
            // frmDespesa
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(404, 302);
            this.Controls.Add(this.tbDespesa);
            this.Controls.Add(this.bnvDespesa);
            this.Name = "frmDespesa";
            this.Text = "Despesa";
            this.Load += new System.EventHandler(this.frmDespesa_Load);
            ((System.ComponentModel.ISupportInitialize)(this.bnvDespesa)).EndInit();
            this.bnvDespesa.ResumeLayout(false);
            this.bnvDespesa.PerformLayout();
            this.tbDespesa.ResumeLayout(false);
            this.DADOS.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dgvDespesa)).EndInit();
            this.DETALHES.ResumeLayout(false);
            this.DETALHES.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.BindingNavigator bnvDespesa;
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
        private System.Windows.Forms.TabControl tbDespesa;
        private System.Windows.Forms.TabPage DADOS;
        private System.Windows.Forms.TabPage DETALHES;
        private System.Windows.Forms.DataGridView dgvDespesa;
        private System.Windows.Forms.ToolStripButton btnSalvar;
        private System.Windows.Forms.ToolStripButton btnCancelar;
        private System.Windows.Forms.ToolStripButton btnAlterar;
        private System.Windows.Forms.ToolStripButton btnFechar;
        private System.Windows.Forms.Label lblOBS;
        private System.Windows.Forms.Label lblValor;
        private System.Windows.Forms.Label lblDespesa;
        private System.Windows.Forms.Label lblMembro;
        private System.Windows.Forms.Label lblData;
        private System.Windows.Forms.TextBox txtObsDespesa;
        private System.Windows.Forms.DateTimePicker dtpDataDespesa;
        private System.Windows.Forms.MaskedTextBox mtxtValor;
        private System.Windows.Forms.ComboBox cbxTipoDespesa;
        private System.Windows.Forms.ComboBox cbxMembro;
        private System.Windows.Forms.TextBox txtIdDespesa;
        private System.Windows.Forms.Label lblIDDESPESA;
    }
}