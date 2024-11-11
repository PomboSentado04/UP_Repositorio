/*Com base na tabela abaixo, escreva um
programa que leia o código de um item e a quantidade deste item. A seguir,
calcule e mostre o valor da conta a pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, escolha;
    int cont = 0;
    float nenero, conta, conta_total;
    char nome[20];
    char escolha_sn;

    printf("\n||Lanchonete Belford Roxo||\n");

    printf("\nEsta eh a tabela de lanches, cada um com seu codigo e preço:\n");
    printf("\n1 / Cachorro-Quente / R$12,00 \n");
    printf("\n2 / X-Salada / R$15,50 \n");
    printf("\n3 / X-Bacon / R$18,00 \n");
    printf("\n4 / Torrada simples / R$8,00 \n");
    printf("\n5 / Refrigerante / R$4,50 \n");

    while (cont == 0)
    {
        printf("\nDigite o codigo de seu pedido: ");
        scanf("%i", &escolha);

        if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5)
        {
            printf("\nCodigo de pedido invalido.");
            exit(1);
        }

        printf("\nDigite a quantidade de seu pedido: ");
        scanf("%i", &num);

        if (num <= 0)
        {
            printf("\nQuantidade de pedido invalida.");
            exit(1);
        }

        switch (escolha)
        {
        case 1:
            strcpy(nome, "Cachorro-Quente");
            nenero = 12;
            conta = nenero * num;
            break;

        case 2:
            strcpy(nome, "X-Salada");
            nenero = 15.50;
            conta = nenero * num;
            break;

        case 3:
            strcpy(nome, "X-Bacon");
            nenero = 18;
            conta = nenero * num;
            break;

        case 4:
            strcpy(nome, "Torrada simples");
            nenero = 8;
            conta = nenero * num;
            break;

        case 5:
            strcpy(nome, "Refrigerante");
            nenero = 4.50;
            conta = nenero * num;
            break;
        }

        printf("\nA conta de seu pedido eh essa:");
        printf("\nPedido: %s", nome);
        printf("\nPreco Unitario: R$%.2f", nenero);
        printf("\nQuantidade: %i", num);
        printf("\nPreco total: R$%.2f\n", conta);

        conta_total = conta_total + conta;

        printf("\nDeseja continuar a sua compra? s/n: ");
        scanf(" %c", &escolha_sn);

        switch (escolha_sn)
        {
        case 's':
            cont = 0;
            break;

        default:
            cont = 1;
        }
    }

    printf("\nA conta total de seus pedidos eh de R$%.2f.\n", conta_total);
    
    return 0;
}