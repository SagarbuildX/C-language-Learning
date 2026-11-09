#include<stdio.h>
int main()
{
    float celsius,farenhiet;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&celsius);

    farenhiet = ( celsius * 9/5) +32;
    printf("farenhiet = %.3f",farenhiet);

    celsius = (farenhiet - 32)*(5/9);
    printf("celsius = %.3f \n ",celsius);

    return 0;



}


