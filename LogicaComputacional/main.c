#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PARA_SEMPRE 1

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Imprime mensagem de boas vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    // Jogo
    int numeroSecreto = 42;
    //printf("O n�mero secreto � %d.\n", numeroSecreto);

    int tentativa = 1;
    while(PARA_SEMPRE){

        printf("\nTentativa %d\n", tentativa);

        int chute;
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);

        if(chute < 1 || chute > 100) {
            printf("O seu chute deve estar entre 1 e 100.\n");
            continue;
        }

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
        tentativa++;
    }

    printf("Fim do jogo com %d tentativas!\n", tentativa);

    return 0;
}
