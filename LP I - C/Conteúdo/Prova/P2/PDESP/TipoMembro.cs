using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Data;
using System.Data.Sql;
//adicionar o papel de membro da familia
namespace PDESP
{
    class TipoMembro
    {
        private int idMembro;
        private string NomeMembro;
        private string Papel;
        private string Parente;

        public int idmembro
        {
            get
            {
                return idMembro;
            }
            set
            {
                idMembro = value;
            }
        }
        public string nomemembro
        {
            get
            {
                return NomeMembro;
            }
            set
            {
                NomeMembro = value;
            }
        }
        public string papelmembro
        {
            get
            {
                return Papel;
            }
            set
            {
                Papel = value;
            }
        }
        public string tipoparente
        {
            get
            {
                return Parente;
            }
            set
            {
                Parente = value;
            }
        }
        public DataTable Listar()
        {
            SqlDataAdapter daMembro;
            DataTable dtTipoMembro = new DataTable();
            try//testar se vai dar erro
            {
                daMembro = new SqlDataAdapter("select*from Membro", frmPrincipal.conexao);
                daMembro.Fill(dtTipoMembro);
                daMembro.FillSchema(dtTipoMembro, SchemaType.Source);//jogando a estrutura da tabela
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return dtTipoMembro;
        }
        public int Salvar()
        {
            int retorno = 0;
            try
            {
                SqlCommand mycommand;
                int nReg;
                mycommand = new SqlCommand("insert into Membro values(@nome_Membro,@papel_Membro)", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@nome_Membro", SqlDbType.VarChar));
                mycommand.Parameters.Add(new SqlParameter("@papel_Membro", SqlDbType.VarChar));
                mycommand.Parameters["@nome_Membro"].Value = nomemembro;//ver
                //mycommand.Parameters["@papel_Membro"].Value = papelmembro;//ver
                mycommand.Parameters["@papel_Membro"].Value = tipoparente;//ver
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
                mycommand = new SqlCommand("update Membro set nome_Membro=@nome_Membro where id_Membro=@id_Membro", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_Membro", SqlDbType.Int));//definindo o tipo de dado
                mycommand.Parameters.Add(new SqlParameter("@nome_Membro", SqlDbType.VarChar));
                mycommand.Parameters["@id_Membro"].Value = idMembro;
                mycommand.Parameters["@nome_Membro"].Value = nomemembro;//ver ultimo parametro
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
                mycommand = new SqlCommand("delete from Membro where id_Membro=@id_Membro", frmPrincipal.conexao);
                mycommand.Parameters.Add(new SqlParameter("@id_Membro", SqlDbType.Int));
                mycommand.Parameters["@id_Membro"].Value = Convert.ToInt16(idMembro);
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
