#include <stdio.h>

int main()
{
    float r, circumference;

    printf("Enter radius: ");
    scanf("%f", &r);

    circumference = 2 * 3.14 * r;

    printf("Circumference = %.2f", circumference);

    return 0;
}