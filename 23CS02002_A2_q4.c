#include<stdio.h>
int main()
{
    int Year;
    printf("Enter the year:");
    scanf("%d",&Year);
    
    if(Year%100==0)
    {
        if(Year%400==0)
        {
            printf("This is a leap year");
        }
        else
        {
            printf("This is not a leap year");
        }
    }
    else if(Year%4==0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}