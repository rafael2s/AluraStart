#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXIMO_DE_TENTATIVAS 5

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Imprime mensagem de boas vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    // Jogo
    int numeroSecreto = 42;
    //printf("O n�mero secreto � %d.\n", numeroSecreto);


    for(int tentativa = 1; tentativa <= MAXIMO_DE_TENTATIVAS; tentativa++){

        printf("\nTentativa %d de %d\n", tentativa, MAXIMO_DE_TENTATIVAS);

        int chute;
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);

        printf("O seu chute � %d.\n", chute);

        int acertou = (chute == numeroSecreto);
        int maior = (numeroSecreto > chute);

        if (acertou) {
            printf("Parab�ns! Voc� acertou!\n");
            break;
        } else if(maior) {
            printf("\nO n�mero secreto � maior que %d.\n", chute);
        } else {
            printf("\nO n�mero secreto � menor que %d.\n", chute);
        }
    }

    printf("Fim do jogo!\n");

    return 0;
}
