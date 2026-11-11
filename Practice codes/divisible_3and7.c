// check whether a number is divisible by 3 & 7 both.

#include<stdio.h>
int main()
{
    int x;

printf("Enter a number = ");
scanf("%d",&x);

if ((x%7==0) && (x%3==0))
{
    printf("Divisible by both");
}

else
{
    printf("not divisible");

}

return 0;
}