//Print all the prime numbers from 1 to N.

#include<stdio.h>
int main()
{
    int n,count=0,j,i,is_prime;  // (j)= divisiblity check : (is prime)=prime or not.
    printf("Enter the number = ");
    scanf("%d",&n);
   

    for (i=2;i<=n;i++)
    {

        is_prime = 1;
        for (j=2;j<i;j++) // inner loop : current no nd divide checks
        {
            if(i%j==0) 
            
            {
                is_prime = 0;
                break;    // break stops inner loop immediately b/c diviser found.......
            }
        }
        if (is_prime == 1) // if diviser not found then no is prime ...print that and increae count......
        {
            printf("%d\n",i);
            count++;
        }
    }


    printf("Total prime no are = %d\n",count);

    return 0;
}