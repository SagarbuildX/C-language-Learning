//Allotation of grades on the basis of marks.
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks = ");
    scanf("%d",&marks);

    if(marks>=40)
    {
        if(marks>=80)
        {
            printf("Pass with distinction\n");
        }

        else 
        {
            printf("pass\n");
        }

    }

    else
    {
        printf("Fail");
    }

    return 0;
}
