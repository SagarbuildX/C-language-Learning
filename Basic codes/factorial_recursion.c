#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number is not defined.");
    }
    else
    {
        result = factorial(num);

        printf("Factorial of %d = %d", num, result);
    }

    return 0;
}