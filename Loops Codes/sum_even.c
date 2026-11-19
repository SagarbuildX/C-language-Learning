// Sum of all even no from 1 to N.
#include <stdio.h>

int main()
{
    int a, sum=0, N;

    printf("Enter N = ");
    scanf("%d",&N);

    for(a=1; a<=N; a++)
    {
        sum = sum + (a*2);
    }

    printf("Sum = %d",sum);

    return 0;
}