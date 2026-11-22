//Print all the prime numbers from 1 to N.
#include<stdio.h>

int main()
{
    int i,N,j,count=0;      // (j)= divisiblity check........
    printf("Enter the value of N = ");
    scanf("%d",&N);

    for (i=2;i<=N;i++)
    {
        count++;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

        if (count==2)
        {
            printf("%d\n",i);
        }
    }

    printf("numbers are = %d\n",count);

    return 0;

}






