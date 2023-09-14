/*
	Programa CLIENTE para a lista linear de inteiros.
*/
#include <stdio.h>
#include "ListaNum_cont.h"

#define TRUE	1
#define FALSE	0

int main(void)
{	int numero;
	TLista lista;
	
	InicializaLista(&lista);

	while (TRUE)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		if (IncluiItem(&lista, numero) == FALSE)
		{	puts("Memoria insuficiente para esta operacao ...");
			return 2;
		}
	}

	ImprimeLista(&lista, "Conteudo da lista:");
		
	while (TRUE)
	{	printf("\n\nInforme o numero a excluir da lista:\n");
		scanf("%d", &numero);
	
		if (numero < 0)
			break;
		
		if (ExcluiItem(&lista, numero) == FALSE)
			puts("Valor nao encontrado para exclusao");
		else
			ImprimeLista(&lista, "Novo conteudo da lista");			
	}
	
	return 0;
}
