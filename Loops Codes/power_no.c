// calculate the power of a number(a raised power b).
#include<stdio.h>
int main()
{
    int a,b,result=1;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);

    for(int i=1;i<=b;i++)
    {
       result = result *a;
    }

    printf("Power = %d",result);
    return 0;

}