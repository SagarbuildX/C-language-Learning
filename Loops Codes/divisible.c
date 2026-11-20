//count how many numbers between 1 and N are divisible by 3.

    #include<stdio.h>
    int main()
    {
        int N,i,count=0;
        printf("Enter the value of N = ");
        scanf("%d",&N);

        for(i=1;i<=N;i++)
        {
            if(i%3==0)
            {
                count++;
            }
        }

        printf("Total divisible no = %d\n",count);

        return 0;

    }