// Keep taking no as input from user until user enter a number which is multiple of 7.

#include<stdio.h>
int main()
{
    int n;
    do
   {
    printf("Enter the no = ");
    scanf("%d",&n);

    printf("%d\n",n);

    if(n%7==0)
    {
        break;
    }

   }
   while(1);
   printf("Thank you");

   return 0;
}