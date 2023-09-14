using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//realizar a inclusão dos campos referentes a tabela de Membros
namespace PDESP
{
    public partial class frmMembro : Form
    {
        private BindingSource bnMembro = new BindingSource();//pagina 10 em diante da apostila teorica
        private bool bInclusao = false;
        private DataSet dsMembro = new DataSet();
        public frmMembro()
        {
            InitializeComponent();
        }

        private void frmMembro_Load(object sender, EventArgs e)
        {
            try//criando na hora de carregar o formulario
            {
                TipoMembro Membro = new TipoMembro();//crio obj tipo despesa
                dsMembro.Tables.Add(Membro.Listar());//carregando no dataset
                bnMembro.DataSource = dsMembro.Tables["MEMBRO"];//jogando no dateset
                dgvMembro.DataSource = bnMembro;
                bnvMembro.BindingSource = bnMembro;
                txtIdMembro.DataBindings.Add("TEXT", bnMembro, "id_Membro");
                txtNomeMembro.DataBindings.Add("TEXT", bnMembro, "nome_Membro");//colocar igual ao banco
                txtPapel.DataBindings.Add("TEXT", bnMembro, "papel_Membro");

                // AJUSTAR DROPDOWNSTYLE PARA DropDownList PARA NAO DEIXAR INCLUIR
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
        private void btnIncluir_Click(object sender, EventArgs e)
        {
            if (tbMembro.SelectedIndex == 0)
            {
                tbMembro.SelectTab(1);
            }
            bnMembro.AddNew();
            txtNomeMembro.Enabled = true;
            txtNomeMembro.Focus();
            txtPapel.Enabled = true;
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;
            cbxParente.Enabled = true;
            bInclusao = true;

        }
        private void btnSalvar_Click_1(object sender, EventArgs e)
        {
            if (txtNomeMembro.Text == "")
            {
                MessageBox.Show("Nome Tipo Membro inválido!");
            }
            else
            {
                TipoMembro RegTipoMembro = new TipoMembro();
                RegTipoMembro.idmembro = Convert.ToInt16(txtIdMembro.Text);
                RegTipoMembro.nomemembro = txtNomeMembro.Text;
                //    RegTipoMembro.papelmembro = txtPapel.Text;
                //RegTipoMembro.papelmembro = cbxParente.SelectedItem.ToString();
                string tipoparente = cbxParente.SelectedItem.ToString();

                if (bInclusao)
                {
                    if (RegTipoMembro.Salvar() > 0)
                    {
                        MessageBox.Show("Tipo Membro foi adicionado com sucesso!");

                        btnSalvar.Enabled = false;
                        txtIdMembro.Enabled = false;
                        txtNomeMembro.Enabled = false;
                        txtPapel.Enabled = false;
                        btnAlterar.Enabled = true;
                        btnIncluir.Enabled = true;
                        btnExcluir.Enabled = true;
                        btnCancelar.Enabled = false;
                        cbxParente.Enabled = false;
                        bInclusao = false;
                        //recarrega o grid
                        dsMembro.Tables.Clear();
                        dsMembro.Tables.Add(RegTipoMembro.Listar());
                        bnMembro.DataSource = dsMembro.Tables["Membro"];

                    }
                    else
                    {
                        MessageBox.Show("Erro ao gravar Tipo Membro!");
                    }
                }
                else
                {
                    if (RegTipoMembro.Alterar() > 0)
                    {

                        MessageBox.Show("TipoMembro alterada com sucesso!");

                        dsMembro.Tables.Clear();
                        dsMembro.Tables.Add(RegTipoMembro.Listar());
                        btnSalvar.Enabled = false;
                        txtIdMembro.Enabled = false;
                        txtNomeMembro.Enabled = false;
                        txtPapel.Enabled = false;
                        btnAlterar.Enabled = true;
                        btnIncluir.Enabled = true;
                        btnExcluir.Enabled = true;
                        btnCancelar.Enabled = false;
                        cbxParente.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("Erro ao gravar Tipo Membro!");

                    }
                }
            }
        }

        private void btnAlterar_Click(object sender, EventArgs e)
        {
            if (tbMembro.SelectedIndex == 0)
            {
                tbMembro.SelectTab(1);
            }

            txtIdMembro.Enabled = false;
            txtNomeMembro.Enabled = true;
            txtPapel.Enabled = true;
            btnSalvar.Enabled = true;
            btnAlterar.Enabled = false;
            btnIncluir.Enabled = false;
            btnExcluir.Enabled = false;
            btnCancelar.Enabled = true;
            bInclusao = false;
            cbxParente.Enabled = false;
        }

        private void btnExcluir_Click(object sender, EventArgs e)
        {
            if (tbMembro.SelectedIndex == 0)
            {
                tbMembro.SelectTab(1);
            }

            if (MessageBox.Show("Confirme exclusão", "Sim ou Não", MessageBoxButtons.YesNo,
                MessageBoxIcon.Question, MessageBoxDefaultButton.Button2) == DialogResult.Yes)
            {
                TipoMembro RegTipoMembro = new TipoMembro();
                RegTipoMembro.idmembro = Convert.ToInt16(txtIdMembro.Text);
                RegTipoMembro.nomemembro = txtNomeMembro.Text;
                RegTipoMembro.papelmembro = txtPapel.Text;

                if (RegTipoMembro.Excluir() > 0)
                {
                    MessageBox.Show("Tipo Membro excluído com sucesso!");
                    TipoMembro R = new TipoMembro();
                    dsMembro.Tables.Clear();
                    dsMembro.Tables.Add(R.Listar());
                    bnMembro.DataSource = dsMembro.Tables["Membro"];
                }
            }
        }

        private void btnCancelar_Click(object sender, EventArgs e)
        {
            bnMembro.CancelEdit();
            btnSalvar.Enabled = false;
            txtIdMembro.Enabled = false;
            txtNomeMembro.Enabled = false;
            txtPapel.Enabled = false;
            btnAlterar.Enabled = true;
            btnIncluir.Enabled = true;
            btnExcluir.Enabled = true;
            btnCancelar.Enabled = false;
            cbxParente.Enabled = false;
        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            this.Close();
        }


    }
    
}