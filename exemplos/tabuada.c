#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int i, numero;

    printf("Informe um numero para tabuada: \n");
    scanf("%d", &numero);

    printf("\nT A B U A D A");
    printf("\n==============");

    for(i = 0; i <= 10; i++){
        printf("\n %d X %2d = %4d", numero, i, (numero * i));
    }

    printf("\n===============\n\n\n");

    system("pause");
    return 0;
}
