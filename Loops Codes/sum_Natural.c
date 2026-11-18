// Sum of first N natural number.

#include<stdio.h>
int main()
{
    int a,sum=0,N;

    printf("Enter the value of N = ");
    scanf("%d",&N);

    for(a=0;a<=N;a++)
    {
        sum = (sum+a);
    }

    printf("%d",sum);

    return 0;
}