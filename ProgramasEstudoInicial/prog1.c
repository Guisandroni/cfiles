#include <stdio.h>

int main(void)
{	int idade;
	float media;
	
	printf("Informe a idade (em anos completos) da primeira pessoa:\n");
	scanf("%d", &idade);
	
	media = idade;
	
	printf("Informe a idade (em anos completos) da segunda pessoa:\n");
	scanf("%d", &idade);
	
	media = media + idade;
	
	printf("Informe a idade (em anos completos) da terceira pessoa:\n");
	scanf("%d", &idade);
	
	media = media + idade;

	printf("Informe a idade (em anos completos) da quarta pessoa:\n");
	scanf("%d", &idade);
	
	media = media + idade;
	printf("Informe a idade (em anos completos) da quinta pessoa:\n");
	scanf("%d", &idade);
	
	media = media + idade;
	
	media = media / 5;
	
	printf("\n\n\nA media de idade eh %.1f anos\n", media);
	
	return 0;
}
