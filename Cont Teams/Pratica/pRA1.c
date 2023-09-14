#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char vRA[14], vEscola[4], vCurso[4], vAno[3], vSem[2],
		 vTurno[2], vSeq[4];
	int c;
		
	printf("Informe o RA:\n");
	scanf("%s", vRA);
	
	printf("\n\n\n\nO RA informado foi: %s\n", vRA);
	
	c = 0;
	while (c < 14)
	{	if (c < 3)
			vEscola[c] = vRA[c];
		else
			if (c < 6)
				vCurso[c - 3] = vRA[c];
			else
				if (c < 8)
					vAno[c - 6] = vRA[c];
				else
					if (c < 9)
						vSem[c - 8] = vRA[c];
					else
						if (c < 10)
							vTurno[c - 9] = vRA[c];
						else
							vSeq[c - 10] = vRA[c];
		
		c = c + 1;
	}
	
	printf("Escola: %s\n", vEscola);
	
	return 0;
}
