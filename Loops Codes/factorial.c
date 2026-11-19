//calculate factorial of a number using(for , while loops).
#include<stdio.h>
int main()
{
   int N,fact=1;
   printf("Enter thr value of N = ");
   scanf("%d",&N);

   int i=1;
   while(i<=N)
   {
    fact = fact * i;i++;
   }
   printf("Fact = %d\n",fact);
    return 0;
}