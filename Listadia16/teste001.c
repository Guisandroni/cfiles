#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char cpf[15];
    bool igual = true;

    printf("Digite o seu CPF: \n");
    scanf("%s", cpf);

    for (int i = 1; i < 14; i++) {
        if (cpf[i] != cpf[0]) {
            igual = false;
            break;
        }
    }

    if (igual) {
        printf("O CPF é inválido pois possui dígitos iguais.\n");
    } else {
        printf("O CPF não possui dígitos iguais.\n");
    }

    return 0;
}