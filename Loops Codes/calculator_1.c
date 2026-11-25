// use of basic calculator
#include<stdio.h>
int main()
{     
    float num1,num2;
   
    printf("Enter value of num 1 = ");
    scanf("%f",&num1);

    char op;
    printf("Enter the operator(+,-,*,/) : ");
    scanf("%c",&op);

    printf("Enter value of num 2 = ");
    scanf("%f",&num2);

    switch(op)
    {
    case '+' :
            printf("Result is = %.2f\n",(num1 + num2));
            break;

    case '-' : 
            printf("Result is = %.2f\n",(num1 - num2));
            break;        

    case '*' : 
            printf("Result is = %.2f\n",(num1 * num2));
            break;

    case '/' : 

            if(num2 !=0)
            {
                printf("Result is = %.2f\n",(num1 / num2));
            }
            else
            {
            printf("can't divide by zero/0");
            }
            break;

    default : printf("Not a valid operator ");
    }
    return 0;
}

