#include<stdio.h>

int main()
{
int a=12,b=4;
int x=a++ - --b;
int y=--a + ++a % --b;

    printf("%d%d", x,y);
    return 0;
}