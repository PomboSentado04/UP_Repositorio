#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SYMBOLS 10 // Quantidade de símbolos que você deseja adicionar (ajuste conforme necessário)

// Função para gerar um caractere aleatório
char gerar_caractere_aleatorio()
{
    int tipo = rand() % 4; // Tipo de caractere (0 - número, 1 - letra maiúscula, 2 - letra minúscula, 3 - símbolo)

    if (tipo == 0)
    {
        // Números de 0 a 9
        return '0' + rand() % 10;
    }
    else if (tipo == 1)
    {
        // Letras maiúsculas de A a Z
        return 'A' + rand() % 26;
    }
    else if (tipo == 2)
    {
        // Letras minúsculas de a a z
        return 'a' + rand() % 26;
    }
    else
    {
        // Símbolos, podemos limitar a um intervalo de símbolos
        char simbolos[] = "!@#$%^&*()-_=+[]{}|;:,.<>?";
        return simbolos[rand() % NUM_SYMBOLS];
    }
}

int main()
{
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera 10 caracteres aleatórios
    for (int i = 0; i < 10; i++)
    {
        printf("%c", gerar_caractere_aleatorio());
    }

    printf("\n");

    return 0;
}