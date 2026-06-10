#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int numero, i;

    printf("Informe um número inteiro: ");
    scanf(" %d", &numero);

    printf("\nT A B U A D A");
    printf("\n==============");

    for(i = 0; i <= 10; i++){
        printf("\n %d X %2d = %4d", (9 * i));
    }


    system("pause");
    return 0;
}
