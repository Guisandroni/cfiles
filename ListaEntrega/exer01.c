#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int dia, mes, ano, d, m, a, s, diadasemana;


    dia = 0;
    mes = 0;
    ano = 0;
    printf("Digite o dia, mês e ano para calcular o dia da semana: \n");
    scanf("%d" "%d" "%d", &dia, &mes, &ano);

    while (dia != 0 && mes != 0 && ano != 0)
    {
            if (mes >= 3 && mes <= 12)
                m = mes - 2;
            else if (mes == 1)
            {
                m = 11;
                ano = ano - 1;
            }
            else
            {
                m = 12;
                ano = ano - 1;
            }

            d = dia;
            a = ano % 100;
            s = ano / 100;

            diadasemana = ((int)(2.6 * m - 0.1) + d + a + a/4 + s/4 - 2 * s) % 7;


            if(mes == 1 || mes == 2)
            ano = ano + 1;
            if (diadasemana < 0)
                diadasemana += 7;

            if (diadasemana == 0)
                printf("%02d/%02d/%04d: Domingo\n", dia, mes, ano);
            else if (diadasemana == 1)
                printf("%02d/%02d/%04d: Segunda-Feira\n", dia, mes, ano);
            else if (diadasemana == 2)
                printf("%02d/%02d/%04d: Terça-Feira\n", dia, mes, ano);
            else if (diadasemana == 3)
                printf("%02d/%02d/%04d: Quarta-Feira\n", dia, mes, ano);
            else if (diadasemana == 4)
                printf("%02d %02d %04d: Quinta-Feira\n", dia, mes, ano);
            else if (diadasemana == 5)
                printf("%02d %02d %04d: Sexta-Feira\n", dia, mes, ano);
            else if (diadasemana == 6)
                printf("%02d %02d %04d: Sábado\n", dia, mes, ano);

            scanf("%d" "%d" "%d", &dia, &mes, &ano);

    }
    return 0;
}