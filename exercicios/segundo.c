#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int numero;

    printf("Informe um número inteiro: ");
    scanf(" %d", &numero);

    printf("          *          \n");
    printf("         ***         \n");
    printf("        *****        \n");
    printf("       *******       \n");
    printf("      *********      \n");
    printf("     ***********     \n");
    printf("    *************    \n");
    printf("   ***************   \n");
    printf("  *****************  \n");
    printf(" ******************* \n");

    system("pause");
    return 0;
}
