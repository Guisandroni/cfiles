#include <stdio.h>

int main(void)
{	int num1, num2, aux, resp = 1;

	while (resp == 1)
	{	printf("Informe os dois inteiros:\n");
		scanf("%d %d", &num1, &num2);
	
		if (num1 < 0)
			num1 = num1 * -1;
	
		if (num2 < 0)
			num2 = num2 * -1;
	
		if (num1 < num2)
		{	aux = num1;
			num1 = num2;
			num2 = aux;
		}
	
		while (num1 % num2 != 0)
		{	aux = num1 % num2;
			num1 = num2;
			num2 = aux;
		}
	
		printf("\nO resultado eh: %d\n", num2);
	
		printf("\nDigite 1 para continuar ou outro valor para encerrar:\n");
		scanf("%d", &resp);
	}
	
	return 0;
}
