#include <stdio.h>

int main(void)
{	int numeros[10], cont, vInfo;

	cont = 0;
	while (cont < 10)
	{	printf("Informe o valor para numeros[%d]:\n", cont);
		scanf("%d", &numeros[cont]);
		
		cont = cont + 1;
	}
	
	printf("Informe o valor a pesquisar:\n");
	scanf("%d", &vInfo);
	
	cont = 0;
	while (cont < 10 && numeros[cont] != vInfo)
		cont = cont + 1;
	
	if (cont < 10)
		printf("\n\nEncontrou o valor %d na posicao %d do vetor\n",
				vInfo, cont);
	else
		printf("\n\nNao encontrou %d no vetor\n", vInfo);
	
	return 0;
}
