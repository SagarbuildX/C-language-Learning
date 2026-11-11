// divisibility of 5 and 11 both 
#include<stdio.h>

int main()
{
    int x;

    printf("Enter a Number = ");
    scanf("%d",&x);

   if (x%5==0 && x%11==0)
   {
    printf("Divisible by 5 and 11");

   }

   else
   {
    printf("Not divisible by both");
    
   }
    return 0;
}