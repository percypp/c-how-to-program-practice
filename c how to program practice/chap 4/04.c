#include <stdio.h>

int main(void)
{
    int num, i, j;
    printf("Enter an odd number in the range 1 to 19 : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i <= num / 2)
            {
                if (j < num / 2 - i || j > num / 2 + i)
                    printf(" ");
                else
                    printf("*");
            }
            else
            {
                if (j < num / 2 - (num - i - 1) || j > num / 2 + (num - i - 1))
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}