#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int sum1 = 0, sum2 = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of primary and secondary diagonals
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + a[i][i];
        sum2 = sum2 + a[i][n - 1 - i];
    }

    printf("\nPrimary diagonal sum = %d", sum1);
    printf("\nSecondary diagonal sum = %d", sum2);

    printf("\nTotal sum of both diagonals = %d", sum1 + sum2);

    return 0;
}
