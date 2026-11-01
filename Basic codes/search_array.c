#include <stdio.h>

int main()
{
    int arr[10], item, i, found = 0;

    printf("Enter 10 elements:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &item);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == item)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found in the array.");
    }

    return 0;
}