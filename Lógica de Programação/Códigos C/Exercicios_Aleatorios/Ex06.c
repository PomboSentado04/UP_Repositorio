#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1000, c, c1 = 0;

    do
    {
        n++;
        if (n % 11 == 5)
        {
            c1++;
        }

        if (c1 == 5)
        {
            c = 0;
        }
    } while (c != 0);

    printf("%d", n);
}