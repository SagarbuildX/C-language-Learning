// check whether a number is divisible by 3 & 7 both.

#include<stdio.h>
int main()
{
    int x;

printf("Enter a number = ");
scanf("%d",&x);

((x%7==0) && (x%3==0))?printf("Divisible by both"):printf("not divisible");


return 0;
}