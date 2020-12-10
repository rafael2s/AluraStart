#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Imprime mensagem de boas vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // Jogo
    int numeroSecreto = 42;
    //printf("O número secreto é %d.\n", numeroSecreto);

    int chute;
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("O seu chute é %d.\n", chute);

    int acertou = (chute == numeroSecreto);

    if (acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue novamente!\n");
    } else {
        printf("Que pena, você errou dessa vez!\n");
        printf("Não desanime, tente novamente!\n");

        int maior = (numeroSecreto > chute);
        if(maior) {
            printf("O número secreto é maior que %d.\n", chute);
        } else {
            printf("O número secreto é menor que %d.\n", chute);
        }
    }


    return 0;
}
