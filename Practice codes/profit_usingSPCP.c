//calculate profit loss using cost price and selling price.

#include<stdio.h>
int main()
{
    int CP,SP;
    printf("Enter the value of CP = ");
    scanf("%d",&CP);

    printf("Enter the value of sP = ");
    scanf("%d",&SP);


    if (CP>SP)
    {
        printf("Loss=%d",CP-SP);
    }
    else if (SP>CP)
    {
        printf("Profit=%d",SP-CP);
    }

    else
    {
        printf(" no loss no gain");
    }
    return 0;

}