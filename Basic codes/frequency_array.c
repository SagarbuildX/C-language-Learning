#include <stdio.h>

int main()
{
    int arr[100], n, item, i, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &item);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", item, count);

    return 0;
}