//calculate whether a given date is valid or not.

#include<stdio.h>
int main()
{
    float units;
    
    printf("Enter the units consumed = \n");
    scanf("%f",&units);

    if(units<=100)
    {
        printf("bill = %.2f",units*10);
    }
    else if(units>100 && units<=250)
    {
        printf("bill = %.2f",(units*10)+(units-100)*20);
    }
    else if(units>250 && units<=500)
    {
        printf("bill = %.2f",(units*10)+(150*20)+(units-250)*30);
    }
    else 
    {
        printf("bill = %.2f",(units*10)+(150*20)+(units-250)*30 + (units-500)*50);
    }

    return 0;
}