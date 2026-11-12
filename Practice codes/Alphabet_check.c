//check whether a character is an alphabet,digit or special character.
#include<stdio.h>
int main()
{
     char ch;
     printf("Enter a character = ");
     scanf("%c",&ch);

     if ((ch>='a')&&(ch<='z'))
     {
        printf("Lower case Alphabets");
     }
     else if ((ch>='A')&&(ch<='Z'))
     {
        printf("Upper case Alphabets");
     }
     else  if (ch>='0'&&ch<='9')
     {
        printf("Numbers");
     }
     else
     {
        printf("Special Charcter");
     }
      return 0;
}