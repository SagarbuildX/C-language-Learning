//Find all no divisible by both 3 and 5 between 1 and 100.

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the value of N = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d\n",i);
            count++;
        }
    }

    printf("Total no divisible are = %d\n",count);
    

    return 0;
}