
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }

        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
