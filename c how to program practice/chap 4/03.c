#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, temp;
    int b0, b1, b2, b3, b4, b5, b6, b7, b8;
    int a0, a1, a2;
    char c0, c1, c2;

    
    for (i = 1; i <= 256; i++)
    {
        // Decimal 
        printf("Decimal is %d\t", i);
        
        // Binary
        temp = i;
        b0 = b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = 0;

        if (temp >= (int)pow(2, 8))
        {
            temp -= (int)pow(2, 8);
            b8 = 1;
        }
        if (temp >= (int)pow(2, 7))
        {
            temp -= (int)pow(2, 7);
            b7 = 1;
        }
        if (temp >= (int)pow(2, 6))
        {
            temp -= (int)pow(2, 6);
            b6 = 1;
        }
        if (temp >= (int)pow(2, 5))
        {
            temp -= (int)pow(2, 5);
            b5 = 1;
        }
        if (temp >= (int)pow(2, 4))
        {
            temp -= (int)pow(2, 4);
            b4 = 1;
        }
        if (temp >= (int)pow(2, 3))
        {
            temp -= (int)pow(2, 3);
            b3 = 1;
        }
        if (temp >= (int)pow(2, 2))
        {
            temp -= (int)pow(2, 2);
            b2 = 1;
        }
        if (temp >= (int)pow(2, 1))
        {
            temp -= (int)pow(2, 1);
            b1 = 1;
        }
        if (temp >= (int)pow(2, 0))
        {
            temp -= (int)pow(2, 0);
            b0 = 1;
        }
        
        printf("Binary is %d%d%d%d%d%d%d%d%d\t", b8, b7, b6, b5, b4, b3, b2, b1, b0);
        
        // Octal

        temp = i;
        a0 = a1 = a2 = 0;
        if (temp >= (int)pow(8, 2))
        {
            a2 = temp / (int)pow(8, 2);
            temp -= a2 * (int)pow(8, 2);
        }
        if (temp >= (int)pow(8, 1))
        {
            a1 = temp / (int)pow(8, 1);
            temp -= a1 * (int)pow(8, 1);
        }
        if (temp >= (int)pow(8, 0))
        {
            a0 = temp / (int)pow(8, 0);
            temp -= a0 * (int)pow(8, 0);
        }
        printf("Octal is %d%d%d\t", a2, a1, a0);

        // Hexa
        
        temp = i;
        c0 = c1 = c2 = 0;
        switch (temp / (int)pow(16, 2))
        {
            case 0:
                c2 = '0';
                break;
            case 1:
                c2 = '1';
                break;
            case 2:
                c2 = '2';
                break;
            case 3:
                c2 = '3';
                break;
            case 4:
                c2 = '4';
                break;
            case 5:
                c2 = '5';
                break;
            case 6:
                c2 = '6';
                break;
            case 7:
                c2 = '7';
                break;
            case 8:
                c2 = '8';
                break;
            case 9:
                c2 = '9';
                break;
            case 10:
                c2 = 'A';
                break;
            case 11:
                c2 = 'B';
                break;
            case 12:
                c2 = 'C';
                break;
            case 13:
                c2 = 'D';
                break;
            case 14:
                c2 = 'E';
                break;
            case 15:
                c2 = 'F';
                break;
        }
        temp -= (temp / (int)pow(16, 2)) * (int)pow(16, 2);

        switch (temp / (int)pow(16, 1))
        {
            case 0:
                c1 = '0';
                break;
            case 1:
                c1 = '1';
                break;
            case 2:
                c1 = '2';
                break;
            case 3:
                c1 = '3';
                break;
            case 4:
                c1 = '4';
                break;
            case 5:
                c1 = '5';
                break;
            case 6:
                c1 = '6';
                break;
            case 7:
                c1 = '7';
                break;
            case 8:
                c1 = '8';
                break;
            case 9:
                c1 = '9';
                break;
            case 10:
                c1 = 'A';
                break;
            case 11:
                c1 = 'B';
                break;
            case 12:
                c1 = 'C';
                break;
            case 13:
                c1 = 'D';
                break;
            case 14:
                c1 = 'E';
                break;
            case 15:
                c1 = 'F';
                break;
        }
        temp -= (temp / (int)pow(16, 1)) * (int)pow(16, 1);

        switch (temp / (int)pow(16, 0))
        {
            case 0:
                c0 = '0';
                break;
            case 1:
                c0 = '1';
                break;
            case 2:
                c0 = '2';
                break;
            case 3:
                c0 = '3';
                break;
            case 4:
                c0 = '4';
                break;
            case 5:
                c0 = '5';
                break;
            case 6:
                c0 = '6';
                break;
            case 7:
                c0 = '7';
                break;
            case 8:
                c0 = '8';
                break;
            case 9:
                c0 = '9';
                break;
            case 10:
                c0 = 'A';
                break;
            case 11:
                c0 = 'B';
                break;
            case 12:
                c0 = 'C';
                break;
            case 13:
                c0 = 'D';
                break;
            case 14:
                c0 = 'E';
                break;
            case 15:
                c0 = 'F';
                break;
        }
        temp -= (temp / (int)pow(16, 0)) * (int)pow(16, 0);

        printf("Hexadecimal Equivalents is %c%c%c\n", c2, c1, c0);
    }
    return 0;
}