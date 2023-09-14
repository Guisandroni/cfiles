// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013
// Compilado pelo Cygwin

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "substring.c"

FILE *arquivo, *erros;
#define MAX 130 // Tamanhos menores tiveram problemas ao imprimir erros

// Exercicio B
void ordenaFatura(Lista *vetor, int tamanho)
{
    int i = 0;

    ordenarCodFatura(vetor, tamanho);
	printf("\nFatura  Produto                                 Qtde Unitario      Frete      Total Fornecedor");

	for(i = 0; i < tamanho; i++)
	{
		printf("\n%4d %6d %34s %4d %9.2f %10.2f %10.2f %10d", 	
        vetor[i].codFatura,
        vetor[i].codProduto,
        vetor[i].nome,
        vetor[i].qtde,
        vetor[i].valor,
        vetor[i].frete,
        vetor[i].total,
        vetor[i].fornecedor);		
	}	
}

// Exercicio C
void totalFatura(Lista *Lista, int tamanho) 
{
    int i = 0, j = 0, k = 0, codFornecedor = 0;
    double Total = 0;

    ordenarFornecedor(Lista, tamanho);
    codFornecedor =  (Lista + i) -> fornecedor;

    printf("\n\nFornecedor |----- %04d -----|\n", (Lista + i) -> fornecedor);
	printf("\nFatura  Produto                                 Qtde Unitario      Frete      Total Fornecedor");

	while(i < tamanho)
	{
        // Uso o while ao inves do if porque imprimi todos os fornecedores juntos
		while((Lista + i) -> fornecedor == codFornecedor)
		{
			printf("\n%4d %6d %34s %4d %9.2f %10.2f %10.2f %10d", 	
            (Lista + i) -> codFatura,
            (Lista + i) -> codProduto,
            (Lista + i) -> nome,
            (Lista + i) -> qtde,
            (Lista + i) -> valor,
            (Lista + i) -> frete,
            (Lista + i) -> total,
            (Lista + i) -> fornecedor);
			i++;
		}
		
        // Somatória do Total
		while (j < i)
		{
			Total += (Lista + j) -> total;
			j++;			
		}
		
        printf("\n\n|----- Total %.2f --------|\n\n", Total);

		Total = 0;
		codFornecedor = (Lista + i) -> fornecedor; // Próximo fornecedor
		
		if(i < tamanho)
		{
            printf("\n\nFornecedor |----- %04d -----|\n", (Lista + i) -> fornecedor);
	        printf("\nFatura  Produto                                 Qtde Unitario      Frete      Total Fornecedor");
		}
    }
    return;
}

// Exercicio A
void ler()
{
    Lista Lista[200];  

    // variavel de status funciona com um fluxograma para o programa
    // Se for N podemos seguir para proxima linha, se for S adicionar linha ao array de erros
    char linha[MAX], dumb[34], status = 'N';
    int x = 0, y = 0, comprimento = strlen(dumb), i;

    fgets(linha, MAX, arquivo);
    
    while (!feof(arquivo)) 
    {
        substring(linha, dumb, 1, 4);
        (Lista + x) -> codFatura = atoi(dumb);

        substring(linha, dumb, 5, 7);
        (Lista + x) -> codProduto = atoi(dumb);

        substring(linha, dumb, 8, 40);
        strcpy((Lista + x) -> nome, dumb);

        substring(linha, dumb, 41, 44);
        (Lista + x) -> qtde = atoi(dumb);

        substring(linha, dumb, 45, 54);
        (Lista + x) -> valor = atof(dumb) / 100;

        substring(linha, dumb, 55, 64);
        (Lista + x) -> frete = atof(dumb) / 100;

        substring(linha, dumb, 65, 68);
        (Lista + x) -> fornecedor = atoi(dumb);

        // Total da Fatura
        (Lista + x) -> total = ((Lista + x) -> valor) * ((Lista + x) -> qtde) + (Lista + x) -> frete;

        if( (Lista + x) -> fornecedor <= 0)
        {
            linha[68] = '\0';
            strcat(linha, " O FORNECEDOR DEVE SER INFORMADO!\n");
            fprintf(erros, "%s", linha);

            status = 'S';
        }

        if( (Lista + x) -> valor <= 0)
        {
            linha[68] = '\0';
            strcat(linha, " O VALOR DEVE SER MAIOR QUE ZERO!\n");
            fprintf(erros, "%s", linha);

            status = 'S';
        }

        if( (Lista + x) -> qtde <= 0)
        {
            linha[68] = '\0';
            strcat(linha, " A QUANTIDADE DEVE SER MAIOR QUE ZERO!\n");
            fprintf(erros, "%s", linha);

            status = 'S';
        }

        if(status == 'S')
		{
			status = 'N';
		}			
		else
		{
			x++;
			status = 'N';
		}

        for (i = 0; i < comprimento; ++i)
        {
            *(dumb + i) = ' ';
        }

        fgets(linha, MAX, arquivo);
    }

    // Exibir faturas corretas
    printf("\nFatura  Produto                                 Qtde Unitario      Frete       Fornecedor");
    for(y = 0; y < x; y++)  
	{
        printf("\n%4d %6d %34s %4d %9.2f %10.2f %16d",
		// printf("\n%04d %03d %34s %4d %.2f %.2f %4d", 	
        Lista[y].codFatura,
        Lista[y].codProduto,
        Lista[y].nome,
        Lista[y].qtde,
        Lista[y].valor,
        Lista[y].frete,
        Lista[y].fornecedor);	
	}
    printf("\n\n|---------------------------- EXERCICIO B  -------------------------------|\n");
    ordenaFatura(Lista, x);

    printf("\n\n|---------------------------- EXERCICIO C  -------------------------------|\n");
    totalFatura(Lista, x);
}

void main ()
{
    arquivo = fopen("fatura.txt", "r");
    if (arquivo == NULL)
    {
        printf("\nErro ao procurar arquivo!\n");
        return;
    }

    erros = fopen("ErroFatura.txt","w");
    if (erros == NULL)
    {
        printf("\nErro ao cadastrar o erro!\n\n");
        return;
    }

    printf("\n|---------------------------- EXERCICIO A -------------------------------|\n");
    ler();

    fclose(arquivo);
    return;
}