#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c", '*');
        printf("\n");
    }

    for (i = 1; i <= 10; i++)
    {
        for (j = i; j <= 10; j++)
            printf("%c", '*');
        printf("\n");
    }

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            if (j < i)
                printf("%c", ' ');
            else
                printf("%c", '*');
        printf("\n");
    }

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            if (j < (10 - i + 1))
                printf("%c", ' ');
            else
                printf("%c", '*');
        printf("\n");
    }
    

    return 0;
}