#include<stdio.h>

int main(void)
{
    float radius, pi = 3.14159;
    printf("Enter the radius of a circle :\n");
    scanf("%f", &radius);
    printf("The circle's diameter is %f,", 2 * radius);
    printf("circumference is %f ", 2 * radius * pi);
    printf("and area is %f\n", pi * radius * radius);

    return 0;
}