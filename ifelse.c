#include<stdio.h>
int main()
{
    int n;
    printf("Enter integer:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is positive integer...",n);
    }
    else if(n<0)
    {
        printf("%d is negetive integer...",n);
    }
    else
    {
        printf("This is zero.Try Again...");
    }
}