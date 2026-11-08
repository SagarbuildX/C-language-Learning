#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("Before swapping \n Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;

    printf("after swapping\n");
    printf("b = %d \n",b);
    printf("a = %d \n",a);


    return 0;


    
}