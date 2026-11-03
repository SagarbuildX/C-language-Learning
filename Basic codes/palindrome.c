#include <stdio.h>

int checkPalindrome(int n)
{
    int original, reverse = 0, remainder;

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    return original == reverse;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative numbers are not Palindrome.");
    }
    else if (checkPalindrome(num))
    {
        printf("%d is a Palindrome number.", num);
    }
    else
    {
        printf("%d is not a Palindrome number.", num);
    }

    return 0;
}