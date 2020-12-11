#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Imprime mensagem de boas vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    // Jogo
    int numeroSecreto = 42;
    //printf("O n�mero secreto � %d.\n", numeroSecreto);

    for(int tentativa = 1; tentativa <= 3; tentativa++){

        printf("\nTentativa %d de 3\n", tentativa);

        int chute;
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);

        printf("O seu chute � %d.\n", chute);

        int acertou = (chute == numeroSecreto);

        if (acertou) {
            printf("Parab�ns! Voc� acertou!\n");
            break;
        } else {
            printf("Que pena, voc� errou dessa vez!\n");
            printf("N�o desanime, tente novamente!\n");

            int maior = (numeroSecreto > chute);
            if(maior) {
                printf("O n�mero secreto � maior que %d.\n", chute);
            } else {
                printf("O n�mero secreto � menor que %d.\n", chute);
            }
        }
    }

    printf("Fim do jogo!\n");

    return 0;
}
