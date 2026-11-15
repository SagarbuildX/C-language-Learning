//calculate whether a given date is valid or not.

#include<stdio.h>
int main()
{
    int units;
    
    printf("Enter the units consumed = \n");
    scanf("%d",&units);

    if(units<=100)
    {
        printf("bill = %d",units*10);
    }
    else if(units>100 && units<=250)
    {
        printf("bill = %d",(units*10)+(units-100)*20);
    }

    else if(units>250 && units<=500)
    {
        printf("bill = %d",(units*10)+(150*20)+(units-250)*30);
    }

    else 

    {
        printf("bill = %d",(units*10)+(150*20)+(units-250)*30 + (units-500)*50);
    }

    return 0;
}