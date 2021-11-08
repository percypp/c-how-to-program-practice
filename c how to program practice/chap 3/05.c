#include <stdio.h>

int main(void)
{
    int num, i = 1, j = 1;
    printf("Enter a number between 1 to 20 : ");
    scanf("%d", &num);
    if (num < 1 || num > 20)
    {
        printf("Error!\n");
    }
    else
    {
        while (i <= num)
        {
            while (j <= num)
            {
                if (i == 1 || i == num)
                    printf("*");
                else
                    if (j == 1 || j == num)
                        printf("*");
                    else
                        printf(" ");
                j++;
            }
            printf("\n");
            i++;
            j = 1;
        }
        
    }
    return 0;
}