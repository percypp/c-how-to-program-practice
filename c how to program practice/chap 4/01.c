#include <stdio.h>

int main(void)
{
    int intVal;
    char charVal;
    scanf("%d\n", &intVal);
    charVal = getchar();
    printf("%d\n%c\n", intVal, charVal);
    return 0;
}