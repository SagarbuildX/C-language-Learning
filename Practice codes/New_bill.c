// Calculate an electricity bill with fixed charge and different units slab.

#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter the units consumed = \n");
    scanf("%d",&units);

    if (units<=100)
    {
        bill = units * 10;
    }

    else if (units>100 && units<=250)
    {

        bill = (units*10) + (units-100)*20;
    }
    else
    {
        bill = (100*10)+(150*20)+(units-250)*30;
    }

    bill = bill +50;
    printf("Total electricity bill = Rs. %.2f",bill);

    return 0;
}

