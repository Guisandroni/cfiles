using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PDESP
{
    public partial class frmDespesa : Form
    {
        private BindingSource bnDespesa = new BindingSource();//pagina 10 em diante da apostila teorica
        private bool bInclusao = false;
        private DataSet dsDespesa = new DataSet();
        private DataSet dsMembro = new DataSet();
        private DataSet dsTipoDespesa = new DataSet();
        private float Valor_Despesa;

        public frmDespesa()
        {
            InitializeComponent();
        }

        private void frmDespesa_Load(object sender, EventArgs e)
        {
            try//criando na hora de carregar o formulario
            {
                Despesa Desp = new Despesa();//crio obj tipo despesa
                dsDespesa.Tables.Add(Desp.Listar());//carregando no dataset
                bnDespesa.DataSource = dsDespesa.Tables["DESPESA"];//jogando no dateset
                dgvDespesa.DataSource = bnDespesa;
                bnvDespesa.BindingSource = bnDespesa;

                TipoMembro membro = new TipoMembro();
                dsMembro.Tables.Add(membro.Listar());
                cbxMembro.DataSource = dsMembro.Tables["MEMBRO"];
                cbxMembro.DisplayMember = "NOME_MEMBRO";
                cbxMembro.ValueMember = "ID_MEMBRO";

                TipoDespesa TDespesa = new TipoDespesa();
                dsTipoDespesa.Tables.Add(TDespesa.Listar());
                cbxTipoDespesa.DataSource = dsTipoDespesa.Tables["TIPODESPESA"];
                cbxTipoDespesa.DisplayMember = "NOME_TIPODESPESA";
                cbxTipoDespesa.ValueMember = "ID_TIPODESPESA";

                txtIdDespesa.DataBindings.Add("TEXT", bnDespesa, "id_Despesa");
                dtpDataDespesa.DataBindings.Add("TEXT", bnDespesa, "Data_Despesa");
                cbxMembro.DataBindings.Add("SelectedValue", bnDespesa, "membro_id_membro");
                cbxTipoDespesa.DataBindings.Add("SelectedValue", bnDespesa, "TipoDespesa_id_TipoDespesa");
                mtxtValor.DataBindings.Add("TEXT", bnDespesa, "Valor_Despesa");
                txtObsDespesa.DataBindings.Add("TEXT", bnDespesa, "obs_despesa");//colocar igual ao banco

                // AJUSTAR DROPDOWNSTYLE PARA DropDownList PARA NAO DEIXAR INCLUIR
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnIncluir_Click(object sender, EventArgs e)
        {
            if (tbDespesa.SelectedIndex == 0)
            {
                tbDespesa.SelectTab(1);
            }
            bnDespesa.AddNew();
            txtIdDespesa.Enabled = false;
            dtpDataDespesa.Enabled = true;
            dtpDataDespesa.Focus();
            cbxMembro.Enabled = true;
            cbxTipoDespesa.Enabled = true;
            mtxtValor.Enabled = true;
            txtObsDespesa.Enabled = true;
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;

            bInclusao = true;

        }

        private void btnSalvar_Click(object sender, EventArgs e)
        {
            if (cbxMembro.Text == "")
            {
                MessageBox.Show("Membro inválido!");
            }
            else if (cbxTipoDespesa.Text == "")
            {
                MessageBox.Show("Tipo de Despesa inválido!");
            }
            else if (float.TryParse(mtxtValor.Text, out Valor_Despesa)==false)
            {
                MessageBox.Show("Valor de Despesa inválido!");
            }
            else
            {
                Despesa RegDespesa = new Despesa();
                RegDespesa.iddespesa = Convert.ToInt16(txtIdDespesa.Text);
                RegDespesa.idmembro = Convert.ToInt16(cbxMembro.SelectedItem);
                RegDespesa.idtipodespesa = Convert.ToInt16(cbxTipoDespesa.SelectedItem);
                RegDespesa.datadespesa = dtpDataDespesa.Value;
                if (txtObsDespesa.Text=="")
                    RegDespesa.obsdespesa = @"N/A";
                else
                    RegDespesa.obsdespesa = txtObsDespesa.Text;

                if (bInclusao)
                {
                    if (RegDespesa.Salvar() > 0)
                    {
                        MessageBox.Show("Despesa foi adicionada com sucesso!");

                        btnSalvar.Enabled = false;
                        txtIdDespesa.Enabled = false;
                        dtpDataDespesa.Enabled = false;
                        cbxMembro.Enabled = false;
                        cbxTipoDespesa.Enabled = false;
                        mtxtValor.Enabled = false;
                        txtObsDespesa.Enabled = false;
                        btnAlterar.Enabled = true;
                        btnIncluir.Enabled = true;
                        btnExcluir.Enabled = true;
                        btnCancelar.Enabled = false;

                        bInclusao = false;
                        //recarrega o grid
                        dsDespesa.Tables.Clear();
                        dsTipoDespesa.Tables.Clear();
                        dsMembro.Tables.Clear();
                        dsDespesa.Tables.Add(RegDespesa.Listar());
                        bnDespesa.DataSource = dsDespesa.Tables["Despesa"];

                    }
                    else
                    {
                        MessageBox.Show("Erro ao gravar Tipo Despesa!");
                    }
                }
                else
                {
                    if (RegDespesa.Alterar() > 0)
                    {

                        MessageBox.Show("TipoDespesa alterada com sucesso!");

                        dsDespesa.Tables.Clear();
                        dsDespesa.Tables.Add(RegDespesa.Listar());
                        btnSalvar.Enabled = false;
                        txtIdDespesa.Enabled = false;
                        dtpDataDespesa.Enabled = false;
                        cbxMembro.Enabled = false;
                        cbxTipoDespesa.Enabled = false;
                        mtxtValor.Enabled = false;
                        txtObsDespesa.Enabled = false;
                        btnAlterar.Enabled = true;
                        btnIncluir.Enabled = true;
                        btnExcluir.Enabled = true;
                        btnCancelar.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("Erro ao gravar Tipo Despesa!");

                    }
                }
            }
        }

        private void btnAlterar_Click(object sender, EventArgs e)
        {
            if (tbDespesa.SelectedIndex == 0)
            {
                tbDespesa.SelectTab(1);
            }

            txtIdDespesa.Enabled = false;
            dtpDataDespesa.Enabled = true;
            dtpDataDespesa.Focus();
            cbxMembro.Enabled = true;
            cbxTipoDespesa.Enabled = true;
            mtxtValor.Enabled = true;
            txtObsDespesa.Enabled = true;
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;
            bInclusao = false;
        }

        private void btnExcluir_Click(object sender, EventArgs e)
        {
            if (tbDespesa.SelectedIndex == 0)
            {
                tbDespesa.SelectTab(1);
            }

            if (MessageBox.Show("Confirme exclusão", "Sim ou Não", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button2) == DialogResult.Yes)
            {
                Despesa RegDespesa = new Despesa();
                RegDespesa.iddespesa = Convert.ToInt16(txtIdDespesa.Text);
                RegDespesa.idmembro = Convert.ToInt16(cbxMembro.SelectedItem);
                RegDespesa.idtipodespesa = Convert.ToInt16(cbxTipoDespesa.SelectedItem);
                RegDespesa.datadespesa = dtpDataDespesa.Value;
                if (txtObsDespesa.Text == "")
                    RegDespesa.obsdespesa = @"N/A";
                else
                    RegDespesa.obsdespesa = txtObsDespesa.Text;

                if (RegDespesa.Excluir() > 0)
                {
                    MessageBox.Show("Despesa excluída com sucesso!");
                    Despesa R = new Despesa();
                    dsDespesa.Tables.Clear();
                    dsDespesa.Tables.Add(R.Listar());
                    bnDespesa.DataSource = dsDespesa.Tables["Despesa"];
                }
            }
        }

        private void btnCancelar_Click(object sender, EventArgs e)
        {
            bnDespesa.CancelEdit();
            btnSalvar.Enabled = false;
            txtIdDespesa.Enabled = false;
            dtpDataDespesa.Enabled = false;
            cbxMembro.Enabled = false;
            cbxTipoDespesa.Enabled = false;
            mtxtValor.Enabled = false;
            txtObsDespesa.Enabled = false;
            btnAlterar.Enabled = true;
            btnIncluir.Enabled = true;
            btnExcluir.Enabled = true;
            btnCancelar.Enabled = false;

        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
