using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PDESP
{
    class Despesa
    {
        private int idDespesa;
        private int idTipoDespesa;
        private int IdMembro;
        private DateTime DataDespesa;
        private float ValorDespesa;
        private string ObsDespesa;

        public int iddespesa
        {
            get
            {
                return idDespesa;
            }
            set
            {
                idDespesa = value;
            }
        }
        public int idtipodespesa
        {
            get
            {
                return idTipoDespesa;
            }
            set
            {
                idTipoDespesa = value;
            }
        }
        public int idmembro
        {
            get
            {
                return IdMembro;
            }
            set
            {
                IdMembro = value;
            }
        }
        public DateTime datadespesa
        {
            get
            {
                return DataDespesa;
            }
            set
            {
                DataDespesa = value;
            }
        }
        public float valordespesa
        {
            get
            {
                return ValorDespesa;
            }
            set
            {
                ValorDespesa = value;
            }
        }
        public string obsdespesa
        {
            get
            {
                return ObsDespesa;
            }
            set
            {
                ObsDespesa = value;
            }
        }

        public DataTable Listar()
        {
            SqlDataAdapter daDespesa;
            DataTable dtDespesa = new DataTable();
            try//testar se vai dar erro
            {
                daDespesa = new SqlDataAdapter("select * from Despesa", frmPrincipal.conexao);
                daDespesa.Fill(dtDespesa);
                daDespesa.FillSchema(dtDespesa, SchemaType.Source);//jogando a estrutura da tabela
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return dtDespesa;
        }
        public int Salvar()
        {
            int retorno = 0;
            try
            {
                SqlCommand mycommand;
                int nReg;
                mycommand = new SqlCommand("insert into Despesa values(@id_TipoDespesa, @id_Membro, @DataDespesa, @ValorDespesa, @ObsDespesa)", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@id_TipoDespesa"].Value = idTipoDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@id_Membro"].Value = IdMembro;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@DataDespesa"].Value = DataDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@ValorDespesa"].Value = ValorDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@ObsDespesa"].Value = ObsDespesa;//ver
                nReg = mycommand.ExecuteNonQuery();

                if (nReg > 0)
                {
                    retorno = nReg;
                }
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return retorno;
        }
        public int Alterar()
        {
            int retorno = 0;
            try
            {
                SqlCommand mycommand;
                int nReg = 0;
                mycommand = new SqlCommand("update Despesa set TIPODESPESA_ID_TIPODESPESA=@id_TipoDespesa," +
                    " MEMBRO_ID_MEMBRO=@id_Membro, " +
                    " DATA_DESPESA=@DataDespesa, " +
                    " VALOR_DESPESA=@ValorDespesa, " +
                    " OBS_DESPESA=@ObsDespesa, " +
                    "where id_Despesa=@id_Despesa", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@id_TipoDespesa"].Value = idTipoDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_Membro", SqlDbType.VarChar));
                mycommand.Parameters["@id_Membro"].Value = IdMembro;//ver
                mycommand.Parameters.Add(new SqlParameter("@DataDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@DataDespesa"].Value = DataDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@ValorDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@ValorDespesa"].Value = ValorDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@ObsDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@ObsDespesa"].Value = ObsDespesa;//ver
                mycommand.Parameters.Add(new SqlParameter("@id_Despesa", SqlDbType.VarChar));
                mycommand.Parameters["@id_Despesa"].Value = idDespesa;//ver
                nReg = mycommand.ExecuteNonQuery();
                if (nReg > 0)
                {
                    retorno = nReg;//numero de registros que ele atingiu
                }
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return retorno;
        }
        public int Excluir()
        {
            int nReg = 0;
            try
            {
                SqlCommand mycommand;
                mycommand = new SqlCommand("delete from despesa where id_Despesa=@id_Despesa", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_Despesa", SqlDbType.Int));
                mycommand.Parameters["@id_Despesa"].Value = Convert.ToInt16(idDespesa);
                nReg = mycommand.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return nReg;
        }
    }
}
