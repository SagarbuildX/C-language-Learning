#include<stdio.h>

int main()
{

    int a=12,b=5;
    int x= a--%5 + ++b*2;
    int y= --a/2 + b++ % 3;
    int z= x-- + ++y*2;
    int w= a++ +b-- -z;

    printf("%d%d%d%d%d%d%d",a,b,x,y,z,w,a+b);

    return 0;
    
}