/*Construa um algoritmo que funcione como uma calculadora simples. A calculadora deve realizar as
operações de soma (+), subtração (-), multiplicação (*) e divisão (/). O usuário deve informar ao
algoritmo dois operandos (dois números) e a operação. O algoritmo deve retornar o resultado da
operação ou uma mensagem de erro caso o usuário solicite uma operação não definida.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float op_1, op_2, res;
    char tipo_op;

    printf("\n|| Calculadora Simples ||\n");

    printf("\nDigite o tipo de operacao (+, -, *, /): ");
    scanf(" %c", &tipo_op); // Adicione um espaço antes de %c para ignorar caracteres de nova linha

    if (tipo_op != '+' && tipo_op != '-' && tipo_op != '*' && tipo_op != '/')
    {
        printf("Tipo de operacao invalido\n");
        exit(1);
    }

    printf("\nDigite o primeiro operador: ");
    scanf("%f", &op_1);

    printf("\nDigite o segundo operador: ");
    scanf("%f", &op_2);

    switch (tipo_op)
    {
    case '+':
        res = op_1 + op_2;
        break;

    case '-':
        res = op_1 - op_2;
        break;

    case '*':
        res = op_1 * op_2;
        break;

    case '/':
        if (op_2 != 0)
        {
            res = op_1 / op_2;
        }
        else
        {
            printf("\nResultado indefinido ou nao existe solucao.\n");
            exit(1);
        }
        break;
    }

    printf("%f %c %f = %f\n", op_1, tipo_op, op_2, res);

    return 0;
}