#include <stdio.h>

int main(void)
{
    int count = 0, num;
    
    printf("Enter a number to determines how many digits in the integer are 7s : ");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num%7 == 0)
        {
            count++;
        }
        num /= 10;
    }
    printf("The number of 7 is %d\n", count);

    
    return 0;
}