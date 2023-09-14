Nomes.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    char palavra1[21], palavra2[21];
    int i, j, n;

    printf("Digite o número de casos: \n");
    scanf("%d", &n);
    char respostas[n][4];
    for (i = 0; i < n; i++)
    {
        printf("Digite a primeira palavra a ser comparada: \n");
        scanf("%s", palavra1);
        printf("Digite a segunda palavra a ser comparada: \n");
        scanf("%s", palavra2);

        if (strlen(palavra1) != strlen(palavra2))
            strcpy(respostas[i], "No");
        else
        {
            for (j = 0; j < strlen(palavra1); j++)
            {
                palavra1[j] = tolower(palavra1[j]);
                if (palavra1[j] == 'a')
                    palavra1[j] = '-';
                else if (palavra1[j] == 'e')
                    palavra1[j] = '-';
                else if (palavra1[j] == 'i')
                    palavra1[j] = '-';
                else if (palavra1[j] == 'o')
                    palavra1[j] = '-';
                else if (palavra1[j] == 'u')
                    palavra1[j] = '-';
            }
        }

        for (j = 0; j < strlen(palavra2); j++)
        {
            palavra2[j] = tolower(palavra2[j]);
            if (palavra2[j] == 'a')
                palavra2[j] = '-';
            else if (palavra2[j] == 'e')
                palavra2[j] = '-';
            else if (palavra2[j] == 'i')
                palavra2[j] = '-';
            else if (palavra2[j] == 'o')
                palavra2[j] = '-';
            else if (palavra2[j] == 'u')
                palavra2[j] = '-';
        }

        if (strcmp(palavra1, palavra2) == 0)
            strcpy(respostas[i], "Yes");
        else
            strcpy(respostas[i], "No");
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\n", respostas[i]);
    }

    return 0;
}