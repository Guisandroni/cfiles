/*
	Manipulação de um RA representado em formato string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{	char vRA[14], vEscola[4], vCurso[4], vAno[3], vSem[2],
		 vTurno[2], vSeq[4], vNovoRA[14];
	int c, iSeq;
		
	printf("Informe o RA:\n");
	scanf("%s", vRA);
	
	printf("\n\nO RA informado foi: %s\n", vRA);
	
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
	
	vEscola[3] = '\0';
	vCurso[3] = '\0';
	vAno[2] = '\0';
	vSem[1] = '\0';
	vTurno[1] = '\0';
	
	printf("Escola: %s\n", vEscola);
	printf("Curso : %s\n", vCurso);
	printf("Ano ..: %s\n", vAno);
	printf("Sem ..: %s\n", vSem);
	printf("Turno : %s\n", vTurno);
	printf("Seq ..: %s\n", vSeq);
	
	iSeq = atoi(vSeq);
	iSeq = iSeq + 1;
	
	sprintf(vNovoRA, "%s%s%s%s%s%03d", vEscola, vCurso, vAno,
										vSem, vTurno, iSeq);
	
	printf("\n\nO novo RA eh: %s\n", vNovoRA);
	
	return 0;
}
