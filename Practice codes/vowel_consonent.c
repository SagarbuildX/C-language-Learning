#include<stdio.h>
int main()

{

char alphabet;
printf("Enter a Alphabet = ");
scanf("%c",&alphabet);

if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
        alphabet == 'o' || alphabet == 'u')
{
    printf("Vowel");
}

else
{
    printf("consonent");
}

return 0;
}