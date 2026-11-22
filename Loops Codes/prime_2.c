// check whether a given no is prime or not.

#include<stdio.h>
int main()
{
    int i,N,count=0;
    printf("Enter the value of N = ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
      
        if(N%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("Prime no");
    }
    else
    {
        printf("Not a prime no ");
    }

    return 0;
}