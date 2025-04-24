#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opcao, numerosecreto, palpite, regras;

    printf("------------------------------------\n");
    printf("       Jogo Número Secreto\n");
    printf("------------------------------------\n\n");

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        printf("\n");

        if (numerosecreto == palpite)
        {
            printf("Você acertou!\n");
            printf("--------------------\n");
            printf(" Número secreto: %d\n", numerosecreto);
            printf("--------------------\n");

        }
        else
        {
            printf("Você errou!\n");
            printf("--------------------\n");
            printf(" Número secreto: %d\n", numerosecreto);
            printf("--------------------\n");
        }
        break;
    case 2:
        printf("Explicação das regras!\n");
        printf("O programa gera aleatoriamente um número entre 0 e 9 e o jogador insere um número como palpite.\n");
        printf("jogo verifica se o palpite coincide com o número secreto e exibe a mensagem correspondente (acerto ou erro).\n");
        break;
    case 3:
        printf("Saindo do jogo! \n");
        break;
    default:
        printf("Opção invalida\n");
        break;

    }
    

    printf("\n");

        printf("____________________________________________________________\n\n");

        printf("\n");

    return 0;
}