/*Você foi contratado para desenvolver um programa que simule
uma conta bancária. O programa deve permitir que o usuário realize três
operações principais: depositar dinheiro na conta, sacar dinheiro da conta e
verificar o saldo atual da conta. Para isso, você deve criar um programa em
linguagem C que inclui funções para cada uma dessas operações.
Os requisitos do programa são:
a. Crie uma função chamada “depositar” que permita ao usuário depositar
uma quantia de dinheiro na conta bancária. A função deve receber o
valor a ser depositado como argumento e atualizar o saldo da conta.
b. Desenvolva uma função chamada “sacar” que permita ao usuário sacar
uma quantia de dinheiro da conta bancária. A função deve verificar se
há saldo suficiente na conta para realizar o saque e atualizar o saldo, se
possível. Caso contrário, deve exibir uma mensagem de erro.
c. Implemente uma função chamada “verificarSaldo” que retorne o saldo
atual da conta bancária.
d. No programa principal, permita que o usuário escolha entre as três
operações: depositar, sacar ou verificar saldo. O programa deve
continuar rodando até que o usuário escolha sair.
e. Certifique-se de que o saldo da conta não possa se tornar negativo após
um saque.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float depositar(float saldo)
{
    float valor;

    printf("\nDigite o valor em reais a ser depositado: ");
    scanf("%f", &valor);

    if (valor < 0)
    {
        valor = 0;
    }

    saldo = saldo + valor;

    printf("\nVoce depositou R$%.2f em sua conta bancaria.\n", valor);

    return saldo;
}

float sacar(float saldo)
{
    float valor;

    do
    {
        printf("\nDigite o valor em reais a ser sacado: ");
        scanf("%f", &valor);

        if (valor > saldo)
        {
            printf("\nVoce nao pode sacar um valor maior do tem em seu saldo, escolha outro.\n");
        }

    } while (valor > saldo);

    saldo = saldo - valor;

    printf("\nVoce sacou R$%.2f de sua conta bancaria.\n", valor);

    return saldo;
}
void verificarSaldo(float saldo)
{
    printf("\nO valor atual da sua conta bancaria eh de R$%.2f.\n", saldo);
}

int main()
{
    printf("||Conta Bancaria||\n");
    int escolha;
    float saldo = 1000;

    while (0 == 0)
    {
        printf("\nEscolha uma opcao:\n 1 - Depositar\n 2 - Sacar\n 3 - Verificar Saldo \n 4 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            saldo = depositar(saldo);
            break;

        case 2:
            saldo = sacar(saldo);
            break;

        case 3:
            verificarSaldo(saldo);
            break;

        case 4:
            printf("\nSaindo");
            for (int i = 0; i < 3; i++)
            {
                Sleep(800);
                printf(".");
            }
            exit(1);
            break;

        default:
            printf("\nValor invalido, digite outro.\n");
            break;
        }
    }

    return 0;
}