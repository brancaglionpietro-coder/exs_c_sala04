#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int numero;
    char nome[50];

    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);

    printf("Informe um número inteiro: ");
    scanf(" %d", &numero);

    if(numero < 45){
         printf("          //\n");
        printf("         //\n");
        printf("        //\n");
        printf("       ||\n");
        printf("       ||\n");
        printf("       ||\n");
        printf("       ||\n");
        printf("      //\\\\\n");
        printf("     //  \\\\\n");
        printf("    || () ||\n");
        printf("    ||____||\n");
        printf("     \\\\  //\n");
        printf("      \\\\//\n");
        printf("       ||\n");
        printf("      /||\\\\\n");
        printf("     / || \\\\\n");
        printf("    *  ||  *\n");
        printf("       ||\n");
        printf("      /  \\\\\n");
        printf("     *    *\n");
    }else{
        printf("            /\\\n");
        printf("       __.-'  `-.__\n");
        printf("    .-'  _     _   '-.\n");
        printf("   /    (o)   (o)     \\\n");
        printf("  |          ^         |\n");
        printf("  |       _______      |\n");
        printf("   \\     / _____ \\    /\n");
        printf("    '-._| |     | |_.-'\n");
        printf("         \\ \\___/ /\n");
        printf("          '.___.'\n");
        printf("      ____/   \\____\n");
        printf("     /   /|   |\\   \\\n");
        printf("    /___/ |___| \\___\\\\\n");

    }



    system("pause");
    return 0;
}
