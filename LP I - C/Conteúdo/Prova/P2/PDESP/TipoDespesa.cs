using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Data;
using System.Data.Sql;
namespace PDESP
{
    class TipoDespesa
    {
        private int idTipoDespesa;
        private string NomeDespesa;

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
        public string nomedespesa
        {
            get
            {
                return NomeDespesa;
            }
            set
            {
                NomeDespesa = value;
            }
        }

        public DataTable Listar()
        {
            SqlDataAdapter daTipoDespesa;
            DataTable dtTipoDespesa = new DataTable();
            try//testar se vai dar erro
            {
                daTipoDespesa = new SqlDataAdapter("select*from TipoDespesa", frmPrincipal.conexao);
                daTipoDespesa.Fill(dtTipoDespesa);
                daTipoDespesa.FillSchema(dtTipoDespesa, SchemaType.Source);//jogando a estrutura da tabela
            }
            catch(Exception ex)
            {
                throw ex;
            }
            return dtTipoDespesa;
        }
        public int Salvar()
        {
            int retorno = 0;
            try
            {
                SqlCommand mycommand;
                int nReg;
                mycommand = new SqlCommand("insert into TipoDespesa values(@nome_TipoDespesa)",frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@nome_TipoDespesa",SqlDbType.VarChar));
                mycommand.Parameters["@nome_TipoDespesa"].Value = nomedespesa;//ver
                nReg = mycommand.ExecuteNonQuery();

                if(nReg>0)
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
                mycommand = new SqlCommand("update TipoDespesa set nome_TipoDespesa=@nome_TipoDespesa where id_TipoDespesa=@id_TipoDespesa", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa", SqlDbType.Int));//definindo o tipo de dado
                mycommand.Parameters.Add(new SqlParameter("@nome_TipoDespesa", SqlDbType.VarChar));
                mycommand.Parameters["@id_TipoDespesa"].Value = idtipodespesa;
                mycommand.Parameters["@nome_TipoDespesa"].Value = nomedespesa;//ver ultimo parametro
                nReg = mycommand.ExecuteNonQuery();
                if (nReg>0)
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
                mycommand = new SqlCommand("delete from tipodespesa where id_TipoDespesa=@id_TipoDespesa", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_TipoDespesa",SqlDbType.Int));
                mycommand.Parameters["@id_tipoDespesa"].Value = Convert.ToInt16(idTipoDespesa);
                nReg = mycommand.ExecuteNonQuery();
            }
            catch(Exception ex)
            {
                throw ex;
            }
            return nReg;
        }
    }
}
