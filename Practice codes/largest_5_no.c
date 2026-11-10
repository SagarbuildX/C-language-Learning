#include<stdio.h>

int main()

{
    int a,b,c,d,e,f;

    printf("Enter the numbers \n ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if (a>=b && a>=c && a>=d && a>=e)
    {
        printf("%d is the largest ",a);
    }

    else if (b>=a && b>=c && b>=d && b>=e)
    {
        printf("%d is the largest",b);
    }

    else if (c>=a && c>=b && c>=d && c>=e)
    {
        printf("%d is the largest",c);

    }

    else if(d>=a && d>=b && d>=c && d>=e)
    {
        printf("%d is the largest",d);

    }

    else
    {
        printf("%d is the largest",e);

    }

    return 0;
}