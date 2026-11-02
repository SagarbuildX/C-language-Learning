#include <stdio.h>
#include <string.h>

int main()
{
    char str[500], word[50];
    char *token;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to search: ");
    scanf("%49s", word);

    token = strtok(str, " ,.!?\n\t");

    while (token != NULL)
    {
        if (strcmp(token, word) == 0)
        {
            count++;
        }

        token = strtok(NULL, " ,.!?\n\t");
    }

    printf("Frequency of '%s' = %d", word, count);

    return 0;
}