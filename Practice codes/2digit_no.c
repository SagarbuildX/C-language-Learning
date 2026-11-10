//check whether a number is a 2 digit number or not.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number = ");
    scanf("%d",&x);
     
    if((x>=10) && (x<100) || (x<=-10)&&(x>=-99))
    {
        printf("2 digit no");
    }
    else
    {
        printf("Not a 2 digit no");
    }
return 0;
}