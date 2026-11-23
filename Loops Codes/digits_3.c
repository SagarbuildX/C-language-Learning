// Count the digits of a number using (do-while loop).....

#include<stdio.h>
int main()
{
    int N,count=0;
    printf("Enter the digit = ");
    scanf("%d",&N);

    do
    {
        count++;
        N=N/10;

    }

    while(N>0);
    printf("Total digits are = %d\n",count);

    return 0;
    
}