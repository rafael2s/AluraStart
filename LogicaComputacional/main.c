#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numeroSecreto;
    numeroSecreto = 42;

    printf("O n�mero secreto � %d.\n", numeroSecreto);

    int chute;
    printf("Qual � o seu chute?");
    scanf("%d", chute);

    printf("O seu chute � %d.\n", chute);

    return 0;
}
