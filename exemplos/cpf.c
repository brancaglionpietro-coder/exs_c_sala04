#include <stdio.h>
#include <string.h>

int main() {
    char cpf[12];
    int i, soma, dig1, dig2;
    int numeros[11];

    printf("Digite o CPF (apenas numeros): ");
    scanf("%11s", cpf);

    if (strlen(cpf) != 11) {
        printf("CPF invalido! Deve conter 11 digitos.\n");
        return 0;
    }

    for (i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            printf("CPF invalido! Contem caracteres nao numericos.\n");
            return 0;
        }
        numeros[i] = cpf[i] - '0';
    }

    // Calculo do primeiro digito verificador
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += numeros[i] * (10 - i);
    }

    dig1 = (soma * 10) % 11;
    if (dig1 == 10) dig1 = 0;

    // Calculo do segundo digito verificador
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += numeros[i] * (11 - i);
    }

    dig2 = (soma * 10) % 11;
    if (dig2 == 10) dig2 = 0;

    if (dig1 == numeros[9] && dig2 == numeros[10]) {
        printf("CPF VALIDO!\n");
    } else {
        printf("CPF INVALIDO!\n");
    }

    system("pause");
    return 0;
}