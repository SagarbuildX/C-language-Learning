// Area of sphere
#include<stdio.h>
int main()
{
    float r, volume;
    
    printf("Enter the value of radius = ");
    scanf("%f",&r);

   volume = (4.0/3.0)*3.14*r*r*r;

   printf("Volume = %.2f\n",volume);

    return 0;
}