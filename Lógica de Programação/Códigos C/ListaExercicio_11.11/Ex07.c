/*Você foi encarregado de desenvolver um programa que gere
senhas seguras de acordo com critérios específicos. O programa deve ser
capaz de gerar senhas com um comprimento definido e que atendam a
requisitos de complexidade.
Os requisitos do programa são:
a. Crie uma função chamada “gerarSenha” que recebe dois parâmetros: o
comprimento desejado da senha e um valor indicando se a senha deve
incluir caracteres especiais (como !, @, #, $, etc.). A função deve
retornar a senha gerada.
b. A senha gerada deve conter uma combinação de letras maiúsculas e
minúsculas, números e, se especificado, caracteres especiais.
c. Certifique-se de que a senha gerada atenda ao comprimento desejado e
aos critérios de complexidade.
d. No programa principal, permita que o usuário insira o comprimento
desejado da senha e escolha se deseja incluir caracteres especiais.
e. Apresente a senha gerada ao usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gerarSenha(int comp, char especial)
{
    char *senha = (char *)malloc(comp * sizeof(char));

    for (int i = 0; i < comp; i++)
    {
    }
}

int main()
{
    int comp;
    char especial;

    printf("||Gerador de Senhas Seguras||\n");

    do
    {
        printf("Digite a quantidade de caracteres que a senha deve ter: ");
        scanf("%d", &comp);

    } while (comp <= 0);

    do
    {
        printf("Deseja ter caracteres especiais em sua senha? s/n: ");
        scanf(" %c", &especial);

        tolower(especial);

    } while (especial != 's' && especial != 'n');

    char *senha = gerarSenha(comp, especial);

    return 0;
}