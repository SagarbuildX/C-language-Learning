//Check whether 3 sides can form a valid triangle or not.

#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the sides = \n ");
    scanf("%d%d%d",&x,&y,&z);

    (x+y>z && y+z>x && x+z>y && x>0 && y>0 && z>0)?printf("Forms a triangle"):printf("Not form a triangle");

    return 0;
}