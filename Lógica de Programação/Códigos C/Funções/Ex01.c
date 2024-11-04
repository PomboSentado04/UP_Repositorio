#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int casas[4] = {0, 0, 0, 0};
int escolha[2];

// Módulo de adicionar e subtrair pontos
void adisub_pontos()
{
    char nome[10];

    char operacao[10];

    int pontos;

    if (escolha[0] == 1)
    {
        strcpy(operacao, "adiciona");
    }
    else if (escolha[0] == 2)
    {
        strcpy(operacao, "subtrai");
    }

    printf("\nSelecione a casa para %sr pontos: \n1. Grifinoria \n2. Sonserina \n3. Corvinal \n4. Lufa-Lufa\n", operacao);

    printf("\nEscolha uma opcao: ");
    scanf("%d", &escolha[1]);

    printf("\nQuantidade de pontos a ser %sda: ", operacao);

    scanf("%d", &pontos);

    if (escolha[0] == 1)
    {
        casas[escolha[1] - 1] = casas[escolha[1] - 1] + pontos;
    }
    else if (escolha[0] == 2)
    {
        casas[escolha[1] - 1] = casas[escolha[1] - 1] - pontos;
    }

    if (casas[escolha[1] - 1] < 0)
    {
        casas[escolha[1] - 1] = 0;
    }

    switch (escolha[1])
    {
    case 1:
        strcpy(nome, "Grifinoria");
        break;

    case 2:
        strcpy(nome, "Sonserina");
        break;

    case 3:
        strcpy(nome, "Corvinal");
        break;

    case 4:
        strcpy(nome, "Lufa-Lufa");
        break;
    }

    printf("\nPontos %sdos a %s com sucesso!\n", operacao, nome);
}

// Módulo de visualizar os pontos
void visualizar_pontos()
{
    printf("\nPontuacao das Casas: \n");
    printf("- Grifinoria: %d pontos\n", casas[0]);
    printf("- Sonserina:  %d pontos\n", casas[1]);
    printf("- Corvinal:   %d pontos\n", casas[2]);
    printf("- Lufa-Lufa:  %d pontos\n", casas[3]);
}

int main()
{
    printf("\nBem-vindo ao Sistema de Pontuacao das Casas de Hogwarts!\n");

    while (0 == 0)
    {
        printf("\nMenu: \n1. Adicionar pontos a uma casa \n2. Subtrair pontos de uma casa \n3. Visualizar pontuacao das casas \n4. Sair\n");

        printf("\nEscolha uma opcao: ");

        scanf("%d", &escolha[0]);

        switch (escolha[0])
        {
        case 1:

            adisub_pontos();

            break;

        case 2:

            adisub_pontos();

            break;

        case 3:

            visualizar_pontos();

            break;

        case 4:

            exit(1);

            break;

        default:

            printf("\nOpcao invalida, digite um numero valido.\n");

            break;
        }
    }
}