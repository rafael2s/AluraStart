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

    for(int tentativa = 1; tentativa <= 3; tentativa++){

        printf("\nTentativa %d de 3\n", tentativa);

        int chute;
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        printf("O seu chute é %d.\n", chute);

        int acertou = (chute == numeroSecreto);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
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
    }

    printf("Fim do jogo!\n");

    return 0;
}
