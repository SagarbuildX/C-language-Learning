//Count the digits of a number using (for loop).

#include<stdio.h>
int main()
{
    int N,count=0,i;
    printf("Enter the digit = ");
    scanf("%d",&N);

    for(i=1;i<=N;N=N/10)
    {
        count++;
    }

    printf("Total digits = %d\n",count);

    return 0;



}
