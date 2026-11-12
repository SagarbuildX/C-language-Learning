#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the values = ");
    scanf("%d%d%d",&x,&y,&z);

   
    if((x<y)&&(x<z))
    {
        printf("x is the smallest");
    }

    else if ((y<z)&&(y<x))
    {
        printf("y is the smallest");
    }

    else 
   {
     printf("z is the smallest");
   }

   return 0;
}
