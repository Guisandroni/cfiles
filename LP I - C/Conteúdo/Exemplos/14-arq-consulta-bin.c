#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arq;

struct data
{ 
   int dia; int mes; int ano;
};

typedef struct TConsulta
{
   struct data dtconsulta;
   char paciente[51];
   char medico[51];
} Consulta;

void novaconsulta()
{   
    int continua=1;
	Consulta vConsulta;
	// a: abre um arquivo em modo texto para gravação, a partir de seu final.
  // Se o arquivo não existir ele será criado
  
	arq = fopen("consulta.dat","ab");
	
	while(continua==1)
	{	printf( "Data:\n" ); 
	    scanf( "%d/%d/%d", &vConsulta.dtconsulta.dia,&vConsulta.dtconsulta.mes, &vConsulta.dtconsulta.ano);
		
		printf( "Nome paciente:\n" ); scanf( "%s", vConsulta.paciente );
		printf( "Nome medico:\n" ); scanf( "%s", vConsulta.medico );
		
		fwrite(&vConsulta, sizeof(vConsulta),1,arq);
		printf("Continua? <1>");
		scanf("%i",&continua);
	}
	fclose(arq);
	
}

void listarConsulta()
{
 
  Consulta vConsulta;
    
  // abre o arquivo
  arq = fopen("consulta.dat","r+b");
  
  if (arq == NULL) 
  {
    printf("Erro ao abrir arquivo\n");
    return; 
  }

  printf("\n");
  printf("Consulta   |  Paciente    |  Medico  \n");
  printf("----+----------------------+-----------+-----------\n");
  
  // lê o primeiro registro do arquivo  
  fread(&vConsulta, sizeof(vConsulta),1,arq);
  while (!feof(arq))
  {      	
	
	    // -30s: alinha à esquerda considerando 30 posições	
    printf("\n%2d/%2d/%4d | %-30s | %-30s ",
	        vConsulta.dtconsulta.dia, vConsulta.dtconsulta.mes, 
			vConsulta.dtconsulta.ano,
			vConsulta.paciente, vConsulta.medico);
    fread(&vConsulta, sizeof(vConsulta),1,arq);
  }
  printf("\n----+----------------------+------+----------------\n");  
 
  fclose(arq);
}

int main()
{
   novaconsulta();
   listarConsulta();
  return 0;	
}