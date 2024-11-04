#include <stdio.h>
#include <string.h>

int main()
{
    int num = 0;

    do
    {
        if (num % 2 == 1)
        {
            printf("%i", num);
        }

    } while (num <= 20);
}