#include <stdio.h>

int main(void)
{
    int a = 0;
    printf("%d\n", ++a);

    int x = 0, y = 0, z = 0;
    z = x++ + y;
    printf("%d\n", z);
    printf("%d\n", x);
    return 0;
}