#include <stdio.h>

typedef struct Lista {
    int codFatura;
    int codProduto;
    char nome[34];
    int qtde;
    double valor;
    double frete;
	double total;
    int fornecedor;
} Lista;

void substring(char *entrada, char *saida, int comeco, int fim)
{
	int i, comprimento = strlen(saida);

	// Clear
	for (i = 0; i < comprimento; ++i)
	{
		*(saida + i) = '\0';
	}

	// Substring
	for (i = comeco; i <= fim; i++)
	{
		*(saida + i - comeco) = *(entrada + i - 1);
	}
}	

void ordenarCodFatura(Lista *vetor, int tamanho)
{
    int x, y;
	Lista dumb;	
	y = 1;

    while (y <= tamanho - 1)
	{
		dumb = vetor[y];
		x = y - 1;
		
		while (x >= 0 && ((vetor + x) -> codFatura) > (dumb.codFatura)) 
		{         	 		   
			*(vetor + x + 1) = *(vetor + x);           
			x = x - 1;
		} 

		*(vetor + x + 1) = dumb;
		y = y + 1;
	}
}

void ordenarFornecedor(Lista *array, int tamanho)
{
	int x, y, z;
	Lista dumb;	
	y = 1;

    while (y <= tamanho - 1)
	{
		dumb = array[y];
		x = y - 1;
		
		while (x >= 0 && ((array + x) -> fornecedor) > (dumb.fornecedor)) 
		{         	 		   
			*(array + x + 1) = *(array + x);           
			x = x - 1;
		} 

		*(array + x + 1) = dumb;
		y = y + 1;
	}
}