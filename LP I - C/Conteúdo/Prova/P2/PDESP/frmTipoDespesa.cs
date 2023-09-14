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
    public partial class frmTipoDespesa : Form
    {
        private BindingSource bnTipoDespesa = new BindingSource();//pagina 10 em diante da apostila teorica
        private bool bInclusao = false;
        private DataSet dsTipoDespesa = new DataSet(); 

        public frmTipoDespesa()
        {
            InitializeComponent();
        }

        private void frmTipoDespesa_Load(object sender, EventArgs e)
        {
            try//criando na hora de carregar o formulario
            {
                TipoDespesa TipoDesp = new TipoDespesa();//crio obj tipo despesa
                dsTipoDespesa.Tables.Add(TipoDesp.Listar());//carregando no dataset
                bnTipoDespesa.DataSource = dsTipoDespesa.Tables["TIPODESPESA"];//jogando no dateset
                dgvTipoDespesa.DataSource = bnTipoDespesa;
                bnvTipoDespesa.BindingSource = bnTipoDespesa;
                txtIdDespesa.DataBindings.Add("TEXT", bnTipoDespesa, "id_TipoDespesa");
                txtNomeDespesa.DataBindings.Add("TEXT", bnTipoDespesa, "nome_Tipodespesa");//colocar igual ao banco
                
                // AJUSTAR DROPDOWNSTYLE PARA DropDownList PARA NAO DEIXAR INCLUIR
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            } 
        }

        private void btnIncluir_Click(object sender, EventArgs e)
        {
            if (tbTipoDespesa.SelectedIndex == 0)
            {
                tbTipoDespesa.SelectTab(1);
            }
            bnTipoDespesa.AddNew();
            txtNomeDespesa.Enabled = true;
            txtNomeDespesa.Focus();
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;

            bInclusao = true;

        }

        private void btnSalvar_Click(object sender, EventArgs e)
        {
            if (txtNomeDespesa.Text == "")
            {
                MessageBox.Show("Nome Tipo Despesa inválido!");
            }
            else
            {
                TipoDespesa RegTipoDespesa = new TipoDespesa();
                RegTipoDespesa.idtipodespesa = Convert.ToInt16(txtIdDespesa.Text);
                RegTipoDespesa.nomedespesa = txtNomeDespesa.Text;

                if (bInclusao)
                {
                    if (RegTipoDespesa.Salvar() > 0)
                    {
                        MessageBox.Show("Tipo Despesa foi adicionado com sucesso!");

                        btnSalvar.Enabled = false;
                        txtIdDespesa.Enabled = false;
                        txtNomeDespesa.Enabled = false;
                        btnAlterar.Enabled = true;
                        btnIncluir.Enabled = true;
                        btnExcluir.Enabled = true;
                        btnCancelar.Enabled = false;

                        bInclusao = false;
                        //recarrega o grid
                        dsTipoDespesa.Tables.Clear();
                        dsTipoDespesa.Tables.Add(RegTipoDespesa.Listar());
                        bnTipoDespesa.DataSource = dsTipoDespesa.Tables["TipoDespesa"];

                    }
                    else
                    {
                        MessageBox.Show("Erro ao gravar Tipo Despesa!");
                    }
                }
                else
                {
                    if (RegTipoDespesa.Alterar() > 0)
                    {
                        
                        MessageBox.Show("TipoDespesa alterada com sucesso!");

                        dsTipoDespesa.Tables.Clear();
                        dsTipoDespesa.Tables.Add(RegTipoDespesa.Listar());
                        btnSalvar.Enabled = false;
                        txtIdDespesa.Enabled = false;
                        txtNomeDespesa.Enabled = false;
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
            if (tbTipoDespesa.SelectedIndex == 0)
            {
                tbTipoDespesa.SelectTab(1);
            }

            txtIdDespesa.Enabled = false;
            txtNomeDespesa.Enabled = true;
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;
            bInclusao = false;
        }

        private void btnExcluir_Click(object sender, EventArgs e)
        {
            if (tbTipoDespesa.SelectedIndex == 0)
            {
                tbTipoDespesa.SelectTab(1);
            }

            if (MessageBox.Show("Confirme exclusão","Sim ou Não", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button2) == DialogResult.Yes)
            {
                TipoDespesa RegTipoDespesa = new TipoDespesa();
                RegTipoDespesa.idtipodespesa = Convert.ToInt16(txtIdDespesa.Text);
                RegTipoDespesa.nomedespesa = txtNomeDespesa.Text;

                if (RegTipoDespesa.Excluir() > 0)
                {
                    MessageBox.Show("Tipo Despesa excluído com sucesso!");
                    TipoDespesa R = new TipoDespesa();
                    dsTipoDespesa.Tables.Clear();
                    dsTipoDespesa.Tables.Add(R.Listar());
                    bnTipoDespesa.DataSource = dsTipoDespesa.Tables["TipoDespesa"];
                }
            }
        }

        private void btnCancelar_Click(object sender, EventArgs e)
        {
            bnTipoDespesa.CancelEdit();
            btnSalvar.Enabled = false;
            txtIdDespesa.Enabled = false;
            txtNomeDespesa.Enabled = false;
            btnAlterar.Enabled = true;
            btnIncluir.Enabled = true;
            btnExcluir.Enabled = true;
            btnCancelar.Enabled = false;

        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void DETALHES_Click(object sender, EventArgs e)
        {

        }
    }
}
//addnewitem, colocar none senão ele puxa automatico, iremos add nosso codigo
//deleteitem, colocar none senão ele puxa automatico, iremos add nosso codigo