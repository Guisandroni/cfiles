#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char palavra[15];
	int c;
	
	printf("Informe a palavra: ");
	scanf("%s", palavra);
	
	printf("\n\n\n\n\nInformou |%s|\n", palavra);
	
	c = 0;
	while (c < 15)
	{	printf("%3d ", palavra[c]);
		c = c + 1;
	}
	
	printf("\n");
	c = 0;
	while (c < 15)
	{	printf("  %c ", palavra[c]);
		c = c + 1;
	}
	
	return 0;
}
