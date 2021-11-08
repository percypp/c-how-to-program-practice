#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Enter two intergers, and I will tell you\n");
    printf("the relationships they satisfy: \n");

    scanf("%d %d", &num1, &num2);

    if (num1 == num2) printf("num1 is equal to num2.\n");
    else
    {
        printf("num1 is not equal to num2.\n");
        if (num1 < num2) printf("num1 less than num2.\n");
        if (num1 > num2) printf("num1 is bigger than num2.\n");
    }
    
    return 0;
}