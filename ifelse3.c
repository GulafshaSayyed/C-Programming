#include<stdio.h>
int main()
{
    int y;
    printf("Enter year to check leap year:");
    scanf("%d",&y);
    if(y>0)
    {
        if(y%4==0)
        {
            printf("%d is a leap year...",y);
        }
        else
        {
            printf("%d is not a leap year...",y);
        }
    }
    else
    {
        printf("Type valid year.Try again...");
    }
}