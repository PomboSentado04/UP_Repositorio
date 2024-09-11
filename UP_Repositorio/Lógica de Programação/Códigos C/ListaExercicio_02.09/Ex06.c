/*Escreva um programa que leia um valor
qualquer e apresente uma mensagem dizendo em qual dos seguintes
intervalos [0,25], (25,50], (50,75], (75,100] esse valor se encontra. Se o valor
não estiver em nenhum destes intervalos, deverá ser impressa a mensagem
“Fora de intervalo”. O símbolo ( representa "maior que". Por exemplo:
[0,25] indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float numero;

    printf("\n||Calculador de Intervalos||\n");
    printf("\nDigite um numero qualquer: ");
    scanf("%f", &numero);

    if (numero >= 0 && numero <= 25)
    {
        printf("\nO valor %g se encontra no intervalo [0,25].\n", numero);
    }
    else if (numero > 25 && numero <= 50)
    {
        printf("\nO valor %g se encontra no intervalo (25,50].\n", numero);
    }
    else if (numero > 50 && numero <= 75)
    {
        printf("\nO valor %g se encontra no intervalo (50,75].\n", numero);
    }
    else if (numero > 75 && numero <= 100)
    {
        printf("\nO valor %g se encontra no intervalo (75,100].\n", numero);
    }
    else
        printf("\nO valor %g se encontra fora de intervalo.\n", numero);
}