#include <stdio.h>

int main(void)
{	float p1, p2, ativ1, ativ2, ativ3, ativ4, ativ5, 
		  mediaProvas, mediaAtivs, notaFinal;
	int faltas;

	printf("Informe as notas das duas provas:\n");
	scanf("%f %f", &p1, &p2);
	
	printf("Agora informe as notas das cinco atividades:\n");
	scanf("%f %f %f %f %f", &ativ1, &ativ2, &ativ3, &ativ4, &ativ5);
	
	printf("Informe a quantidade de faltas do aluno:\n");
	scanf("%d", &faltas);
	
	if (faltas > 20)
		printf("\n\nAluno foi reprovado por faltas\n");
	else
	{	mediaProvas = (p1 + p2) / 2.0;
		mediaAtivs = (ativ1 + ativ2 + ativ3 + ativ4 + ativ5) / 5.0;
		notaFinal = mediaProvas * 0.75 + mediaAtivs * 0.25;
		
		if (notaFinal >= 5.75)
			printf("\n\nAluno aprovado com nota %.1f\n", notaFinal);
		else
			printf("\n\nAluno REPROVADO com nota %.1f\n", notaFinal);		
	}
	
	return 0;
}
