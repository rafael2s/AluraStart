#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto;
    numeroSecreto = 42;

    printf("O número secreto é %d.\n", numeroSecreto);

    int chute;
    printf("Qual é o seu chute?");
    scanf("%d", chute);

    printf("O seu chute é %d.\n", chute);

    return 0;
}
