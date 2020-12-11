#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXIMO_DE_TENTATIVAS 5

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Imprime mensagem de boas vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // Jogo
    int numeroSecreto = 42;
    //printf("O número secreto é %d.\n", numeroSecreto);


    for(int tentativa = 1; tentativa <= MAXIMO_DE_TENTATIVAS; tentativa++){

        printf("\nTentativa %d de %d\n", tentativa, MAXIMO_DE_TENTATIVAS);

        int chute;
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        printf("O seu chute é %d.\n", chute);

        int acertou = (chute == numeroSecreto);
        int maior = (numeroSecreto > chute);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if(maior) {
            printf("\nO número secreto é maior que %d.\n", chute);
        } else {
            printf("\nO número secreto é menor que %d.\n", chute);
        }
    }

    printf("Fim do jogo!\n");

    return 0;
}
