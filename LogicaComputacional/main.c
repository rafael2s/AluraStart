#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define JOGANDO 1
#define ACABOU 0


int main(){

    setlocale(LC_ALL, "Portuguese");

    int segundos = time(0);
    srand(segundos);

    // Imprime mensagem de boas vindas

    printf("`         `               -|      `      |-         `\n");
    printf("      -|     `        `   [-_-_-_-_-_-_-_-]    `             |- `\n");
    printf("      [-_-_-_-_-]   `      |             |   `  `   [-_-_-_-_-]\n");
    printf("       | o   o |           [  0   0   0  ]  `        | o   o |   `\n");
    printf("`       |     |    -|       |           |    `  |-    |     |\n");
    printf(" `      |     |_-___-___-___-|         |-___-___-___-_|     |\n");
    printf("    `   |  o  ]              [    0    ]              [  o  |\n");
    printf("        |     ]   o   o   o  [ _______ ]  o   o   o   [     |----__________\n");
    printf("_____----- |     ]              [ ||||||| ]              [     |\n");
    printf("        |     ]              [ ||||||| ]              [     |\n");
    printf("    _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_\n");
    printf("   ( (__________------------_____________-------------_________) )\n");
    printf("******************************************************************\n");
    printf("************* Bem-vindo ao nosso jogo de adivinhação *************\n");
    printf("******************************************************************\n");

    // Jogo
    int numeroSecreto = rand() % 100 + 1;
    //printf("O número secreto é %d.\n", numeroSecreto);

    int tentativa = 1;
    double pontos = 1000;
    int state = JOGANDO;

    while(state == JOGANDO){

        printf("\nTentativa %d\n", tentativa);

        int chute;
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if(chute < 1 || chute > 100) {
            printf("O seu chute deve estar entre 1 e 100.\n");
            continue;
        }

        printf("O seu chute é %d.\n", chute);

        int acertou = (chute == numeroSecreto);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            state = ACABOU;
            continue;
        }
        int maior = (numeroSecreto > chute);
        if(maior) {
            printf("\nO número secreto é maior que %d.\n", chute);
        } else {
            printf("\nO número secreto é menor que %d.\n", chute);
        }

        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;

        pontos = pontos - pontosPerdidos;
        tentativa++;
    }

    printf("Fim do jogo com %d tentativas e %.2f pontos!\n", tentativa, pontos);

    return 0;
}
