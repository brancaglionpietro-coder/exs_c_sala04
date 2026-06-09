//Inclui biblioteca stdio.h que permite usar entrada e saida de infos (printf e scanf)
#include<stdio.h>
//Inclui bibiliotecas utilitarias (system())
#include<stdlib.h>

int main(){

    //declarar variaveis
    float numero1, numero2, resp;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    resp = numero1 + numero2;
    printf("%.2f",resp);


    //pausar o sistema ate que o usuario pessione uma tecla
    system("pause");
    //finalizando o sistema - ocorreu tudo bem
    return 0;
}

