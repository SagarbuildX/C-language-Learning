//Count the digits of a number using (while loop).....

#include<stdio.h>
int main()
{
    int N;
     int count=0;
    printf("Enter the digit = ");
    scanf("%d",&N);

   
    while(N > 0)
    {
        N = N / 10;
        count++;
        
    }
    printf("Total digit are = %d\n",count);
    return 0;

}
