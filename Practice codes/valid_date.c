
//calculate whether a given date is valid or not.

#include<stdio.h>

int main()
{
    int days,month,year;
    printf("Enter the date (DD/MM/YYYY) =\n");
    scanf("%d/%d/%d",&days,&month,&year);

    if(month<1 || month>12)
    {
        printf("Invalid date ");
    }

    else if (days<1)
    {
        printf("Invalid date");
    }
    else if(month==2)
    {
        if((year%400==0)||(year%4==0 && year % 100 !=0))
        {
            if(days<30)
            printf("valid date");
            else
            printf("Invalid date");

        }

        else if (month==4||month==6||month==9||month==11)
        {
            if (days<=30)
            printf("Valid date");
            else
            {
                if (days<=31)
                printf("valid date");
                else
                printf("Invalid date");
            }
        }
    }
            
    


    return 0;
}

