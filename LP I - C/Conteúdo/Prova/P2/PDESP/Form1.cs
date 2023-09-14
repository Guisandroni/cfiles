using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.Sql;
using System.Data.SqlClient;


namespace PDESP
{
    public partial class frmPrincipal : Form
    {
        public static SqlConnection conexao; 

        public frmPrincipal()
        {
            InitializeComponent();
        }

        private void frmPrincipal_Load(object sender, EventArgs e)
        {
             try
             {
                // aqui a conexão vai depende da sua máquina da escola ou particular
                //conexao = new SqlConnection("Data Source=apolo;Initial Catalog=LP2; User ID=BD1813010;Password=Db31806m");
                conexao = new SqlConnection(@"Data Source=DESKTOP-6K458C5\MSSQLSERVER02;Initial Catalog=apolo;Integrated Security=True");//usando assim para conexão local
                conexao.Open();
             }
                catch (SqlException ex)
             {
                MessageBox.Show("Erro de banco de dados =/" + ex.Message);
             }
                catch (Exception ex)
             {
                MessageBox.Show("Outros Erros =/" + ex.Message);
             } 
                                   
        }

        private void tipoDeDespesaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            frmTipoDespesa frmTipo_Despesa = new frmTipoDespesa();
            frmTipo_Despesa.Show();
        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void membroFamiliarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            frmMembro frmTipo_Membro = new frmMembro();
            frmTipo_Membro.Show();
        }

        private void despesasToolStripMenuItem_Click(object sender, EventArgs e)
        {
            frmDespesa _frmDespesa = new frmDespesa();
            _frmDespesa.Show();
        }
    }
}
