// calculate grades on the basis of marks

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks = ");
    scanf("%d",&marks);

    if (marks>100)

    {
        printf("ERROR");
    }
    
    
    
    else if (marks>=95)

    {
        printf("A+");
    }

    else if((marks>=85) && (marks<95))

    {
        printf("A");
    }

    else if ((marks>=70) && (marks<85))
    {
        printf("B");
    }

    else if ((marks>=60) && (marks<70))
    {
        printf("C");
    }

    else if ((marks>=40) && (marks<60))
      { 
         printf("D");
        }

        else 
        {
            printf("FAIL");
        }
    return 0;
}