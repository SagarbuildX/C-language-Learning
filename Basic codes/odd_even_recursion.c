#include <stdio.h>

void check(int n)
{
    if (n == 0)
    {
        printf("Even number");
    }
    else if (n == 1)
    {
        printf("Odd number");
    }
    else
    {
        check(n - 2);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    check(num);

    return 0;
}