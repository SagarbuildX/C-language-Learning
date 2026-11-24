//use of break statment......
#include<stdio.h>
int main()
{
    char day;
    printf("Enter day = ");
    scanf("%s",&day);
    switch(day)
    {
                case 'M' : printf("Monday");
                         break; 

                 case 'T' : printf("tuesday");
                          break; 

                 case 'W': printf("wednesday");
                          break; 

                 case't': printf("thursday");
                          break; 

                 case'F': printf("friday");
                          break; 

                 case'S': printf("saturday");
                          break; 

                 case's': printf("Sunday");
                          break; 

                default : printf("Not a valid day");
}
    return 0;
}