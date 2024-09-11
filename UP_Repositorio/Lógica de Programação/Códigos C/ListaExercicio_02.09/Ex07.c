/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma
casa decimal, correspondente às quatro notas de um aluno. Calcule a média
com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre
esta média acompanhada pela mensagem "Media: ". Se esta média for maior
ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada
for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média
calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve
imprimir a mensagem "Aluno em exame".
No caso do aluno estar em exame, leia um valor correspondente à nota
do exame obtida pelo aluno. Imprima então a mensagem "Nota do exame: "
acompanhada pela nota digitada. Recalcule a média (some a pontuação do
exame com a média anteriormente calculada e divida por 2). e imprima a
mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno
reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos
(aprovado ou reprovado após ter pego exame) apresente na última linha uma
mensagem "Media final: " seguido da média final para esse aluno.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float N1, N2, N3, N4, media, rec;
    int em_exame = 0;
    char cond[20];

    printf("\n||Calculador de Nota de Aluno||\n");
    printf("\nDigite o valor de N1: ");
    scanf("%f", &N1);
    printf("\nDigite o valor de N2: ");
    scanf("%f", &N2);
    printf("\nDigite o valor de N3: ");
    scanf("%f", &N3);
    printf("\nDigite o valor de N4: ");
    scanf("%f", &N4);

    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4)) / 10;

    if (media >= 7)
    {
        strcpy(cond, "Aluno aprovado");
    }
    else if (media < 5)
    {
        strcpy(cond, "Aluno reprovado");
    }
    else if (media < 7 && media >= 5)
    {
        strcpy(cond, "Aluno em recuperacao");
        em_exame = 1;
    }

    printf("\n%.1f: %s.\n", media, cond);

    if (em_exame == 1)
    {
        printf("\nDigite a nota da recuperacao: ");
        scanf("%f", &rec);
        media = (media + rec) / 2;

        if (media >= 5)
        {
            strcpy(cond, "Aluno aprovado");
        }
        else if (media < 5)
        {
            strcpy(cond, "Aluno reprovado");
        }

        printf("\n%.1f: %s.\n", media, cond);
    }
}