#include<stdio.h>

int main()
{
    float units;
    printf("Enter the units = ");
    scanf("%f",&units);


    if (units<0)
    {
        printf("ERROR");
    }

    else if(units<=100)
    {
        printf("Rs 5/- unit");
    }

    else if (units<=250 && units>100)
    {
        printf("Rs10 /- unit");
    }

    else
    {
        printf("Rs 20/- unit");
    }

    return 0;



}