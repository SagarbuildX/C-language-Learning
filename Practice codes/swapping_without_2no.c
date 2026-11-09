#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Before swapping \n Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a = %d \n ",a);
    printf("b = %d \n ",b);
   

    return 0;


    
}





int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);