#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative number.");
        return 0;
    }

    if (num == 0)
    {
        printf("Binary number = 0");
        return 0;
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary number = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}