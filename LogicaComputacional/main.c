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
    printf("O n�mero secreto � %d.\n", numeroSecreto);

    int chute;
    printf("Qual � o seu chute? ");
    scanf("%d", &chute);

    printf("O seu chute � %d, enquanto o n�mero secreto � %d.\n", chute, numeroSecreto);

    return 0;
}
