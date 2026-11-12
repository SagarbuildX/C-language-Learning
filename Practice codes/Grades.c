#include<stdio.h>

int main()
{
    int Physics,Chemistry,Maths,English,Hindi;
    printf("Enter the numbers =\n ");
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Maths,&English,&Hindi);
    
    if(Physics>=33&&Chemistry>=33&&Maths>=33&&English>=33&&Hindi>=33)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");

    }

    return 0;
}

