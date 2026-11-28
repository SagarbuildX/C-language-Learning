// Prints(Namaste)if user is indian & Bonjour if French ...using Fun

#include<stdio.h>

void Namaste();
void Bonjour();

int main()
{

    printf("Enter N if indian Enter B if French : \n");

    char ch;
    scanf("%c",&ch);

    if (ch=='N')
    {
        printf("Namaste\n");
    }

    else if (ch == 'B')
    {
        printf("Bonjour\n");
    }

    else
    {
        printf("Enter valid argument");
    }

    return 0;
}

void Namaste()
{
    printf("Namaste\n");
}

void Bonjour()
{
    printf("Bonjour");
}

