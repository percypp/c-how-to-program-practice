#include<stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, small, big;
    printf("Enter 5 numbers :\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    //Find the biggest number
    if (num1 >= num2)
    {
        if (num3 >= num4)
        {
            if (num1 >= num3)
            {
                if (num1 >= num5) big = num1;
                if (num1 < num5) big = num5;
            }
            if (num1 < num3)
            {
                if (num3 >= num5) big = num3;
                if (num3 < num5) big = num5;
            }
        }
        if (num3 < num4)
        {
            if (num1 >= num4)
            {
                if (num1 >= num5) big = num1;
                if (num1 < num5) big = num5;
            }
            if (num1 < num4)
            {
                if (num4 >= num5) big = num4;
                if (num4 < num5) big = num5;
            }
        }
    }
    if (num1 < num2)
    {
        if (num3 >= num4)
        {
            if (num2 >= num3)
            {
                if (num2 >= num5) big = num2;
                if (num2 < num5) big = num5;
            }
            if (num2 < num3)
            {
                if (num3 >= num5) big = num3;
                if (num3 < num5) big = num5;
            }
        }
        if (num3 < num4)
        {
            if (num2 >= num4)
            {
                if (num2 >= num5) big = num2;
                if (num2 < num5) big = num5;
            }
            if (num2 < num4)
            {
                if (num4 >= num5) big = num4;
                if (num4 < num5) big = num5;
            }
        }
    }

    // Find the smallest number
    if (num1 >= num2)
    {
        if (num3 >= num4)
        {
            if (num2 >= num4)
            {
                if (num4 >= num5) small = num5;
                if (num4 < num5) small = num4;
            }
            if (num2 < num4)
            {
                if (num2 >= num5) small = num5;
                if (num2 < num5) small = num2;
            }
        }
        if (num3 < num4)
        {
            if (num2 >= num3)
            {
                if (num3 >= num5) small = num5;
                if (num3 < num5) small = num3;
            }
            if (num2 < num3)
            {
                if (num2 >= num5) small = num5;
                if (num2 < num5) small = num2;
            }
        }
    }
    if (num1 < num2)
    {
        if (num3 >= num4)
        {
            if (num1 >= num4)
            {
                if (num4 >= num5) small = num5;
                if (num4 < num5) small = num4;
            }
            if (num1 < num4)
            {
                if (num1 >= num5) small = num5;
                if (num1 < num5) small = num1;
            }
        }
        if (num3 < num4)
        {
            if (num1 >= num3)
            {
                if (num3 >= num5) small = num5;
                if (num3 < num5) small = num3;
            }
            if (num1 < num3)
            {
                if (num1 >= num5) small = num5;
                if (num1 < num5) small = num1;
            }
        }
    }

    printf("The bigget number is %d\n", big);
    printf("The smallest number is %d\n", small);
    return 0;
}