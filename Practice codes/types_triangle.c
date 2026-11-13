// Find the type of triangle:Equuilateral,isosceles or scalene.

#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the sides = \n ");
    scanf("%d%d%d",&x,&y,&z);
    if((x==y)&&(y==z))
    {
    printf("Equilateral");
    }
    else if ((x==y) || (y==z) || (x==z))
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
     return 0;
}