// Angelino Pires - RA: 0030481723015
// Bruno Hiroki - RA: 0030481723013

#include <stdio.h>
#include <string.h>

void ImprimirPoltronas(char IndiceLetras[6], char Poltronas[5][15], int Cont, int Cont2) {
    printf("  ");
    for (Cont = 1; Cont <= 15; Cont++) {
        printf("%4i", Cont);
    }

    /* COMEÇO DAS FILEIRAS E-D*/
    for (Cont = 0; Cont  <= 1; Cont++) {
        printf("\n   -------------------------------------------------------------");
        printf("\n %c |", IndiceLetras[Cont]);

        for (Cont2 = 0; Cont2 <= 14; Cont2++) {
            printf("   |");
            Poltronas[Cont][Cont2] = 0;
        }
    }
    printf("\n   -------------------------------------------------------------\n\n");
    /* FIM DAS FILEIRAS E-D*/

    /* COMEÇO DAS FILEIRAS A-B-C*/
    for (Cont = 2; Cont  <= 4; Cont++) {
        printf("\n   -------------------------------------------------------------");
        printf("\n %c |", IndiceLetras[Cont]);

        for (Cont2 = 0; Cont2 <= 14; Cont2++) {
            printf("   |");
            Poltronas[Cont][Cont2] = 0;
        }
    }
    printf("\n   -------------------------------------------------------------\n\n");
    /* FIM DAS FILEIRAS A-B-C*/
}
void main () {
    int Cont = 0, Cont2 = 0, Tamanho, Numero, P1, P2;
    char IndiceLetras[5] = {'E', 'D', 'C', 'B', 'A'};
    char IndiceLetras2[5] = {'A', 'B', 'C', 'D', 'E'};
    char Cadeira[4], Poltronas[5][15], Letra;

    ImprimirPoltronas(IndiceLetras, Poltronas, Cont, Cont2);

    printf("\n\nPor favor, insira a poltrona que voce deseja se sentar (Letra e Numero): \n");
    scanf("%s", Cadeira);
    Tamanho = strlen(Cadeira);

    while (Cadeira[0] != '0') {

        /* Verificacao do Tamanho da string */
        if (Tamanho < 2 || Tamanho > 3) {
            printf("\nPoltrona invalida! Tente novamente.\n\n");

        } else {
            Letra = Cadeira[0];

            /* Verifica a Letra da Poltrona */
            if (Letra < 65 || Letra > 69) {
                printf("\nInsira uma letra Correta, de A ate E!\n\n");

            } else {
                if (Tamanho == 2) {
                    Numero = Cadeira[1] - 48;

                } else if (Tamanho == 3) {
                    Numero = (Cadeira[1] - 48) * 10 + (Cadeira[2] - 48);
                }

                /* Verifica o Numero da Poltrona */
                if (Numero < 1 || Numero > 15) {
                    printf("\nInsira um numero Correto, de 1 ate 15!\n\n");

                } else {
                    P1 = Letra - 65;
                    P2 = Numero - 1;

                    if (Poltronas[P1][P2] != 0) {
                        printf("\n\nSinto muito, a poltrona ja foi escolhida! Tente outra!\n\n");

                    } else {
                        Poltronas[P1][P2] = 1;

                        /* Verifica o tipo de assento */
                        if (Numero <= 4) {
                            printf("\nAssento EXECUTIVO escolhido com sucesso!\n\n");

                        } else if (Numero <= 6) {
                            printf("\nAssento CONFORTO escolhido com sucesso!\n\n");

                        } else {
                            printf("\nAssento ECONOMICO escolhido com sucesso!\n\n");
                        }

                        /* COMECO DA REIMPRESSAO DAS POLTRONAS */
                        printf("  ");
                        for (Cont = 1; Cont <= 15; Cont++) {
                            printf("%4i", Cont);
                        }

                        for (Cont = 0; Cont  <= 4; Cont++) {
                            printf("\n   -------------------------------------------------------------");
                            printf("\n %c |", IndiceLetras2[Cont]);

                            for (Cont2 = 0; Cont2 <= 14; Cont2++) {
                               if (Poltronas[Cont][Cont2] == 0){
                                    printf("   |");

                                } else {
                                    printf(" * |");
                                }
                            }

                            if (Cont == 2) {
                                printf("\n   -------------------------------------------------------------\n\n");
                            }
                        }
                        printf("\n   -------------------------------------------------------------");
                        /* FIM DA REIMPRESSAO DAS POLTRONAS */
                    }
                }
            }
        }
        for (Cont = 0; Cont <= 3; Cont++) {
            Cadeira[Cont] = 0;
        }

        printf("\n\nPor favor, insira a poltrona que voce deseja se sentar (Letra e Numero): \n");
        scanf("%s", Cadeira);
        Tamanho = strlen(Cadeira);
    }
}