/*
	Versão estendida do programa que implementa por CONTIGUIDADE 
	a lista linear de inteiros.

	Faz a exclusão de elementos da lista. 
	Utiliza descritor estruturado e subrotinas.
*/
#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0
#define MAXIMO	50

typedef int TItem;

typedef struct
{	int final, qtde, soma;
	TItem lista[MAXIMO];	
} TLista;

void ImprimeLista(TLista *, char *);
void InicializaLista(TLista *);
int IncluiItem(TLista *, int);
int ExcluiItem(TLista *, int);

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

void InicializaLista(TLista *lista)
{	lista->final = 0;
	lista->qtde = 0;
	lista->soma = 0;
}

void ImprimeLista(TLista *lista, char *cabec)
{	/* imprimindo os valores da lista */
	int cont;

	if (lista->final == 0)
		puts("Lista vazia");
	else
	{	printf("\n\n\n%s\n", cabec);

		cont = 0;
		while (cont != lista->final)
		{	printf("%d\n", lista->lista[cont]);
			
			cont = cont + 1;
		}
		
		printf("Soma = %d   Media = %.2f\n", lista->soma, 
				lista->soma / (float)lista->qtde);
	}
}

int IncluiItem(TLista *lista, int valor)
{	if (lista->final == MAXIMO)
		return FALSE;
	
	lista->lista[lista->final] = valor;
	lista->final = lista->final + 1;
	lista->qtde = lista->qtde + 1;
	lista->soma = lista->soma + valor;

	return TRUE;
}

int ExcluiItem(TLista *lista, int valor)
{	int cont;

	/* Procurando o item a ser excluido */
	cont = 0;
	while (cont < lista->final && valor != lista->lista[cont])
		cont = cont + 1;
	
	if (cont == lista->final)
		return FALSE;
	else
	{	/* trazendo os elementos posteriores ao eliminado
			para o elemento anterior */
		while (cont < lista->final)
		{	lista->lista[cont] = lista->lista[cont + 1];
			cont = cont + 1;
		}
			
		lista->final = lista->final - 1;
		lista->qtde = lista->qtde - 1;
		lista->soma = lista->soma - valor;
	}
		
	return TRUE;
}
