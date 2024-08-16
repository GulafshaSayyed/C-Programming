#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter numerator a:");
    scanf("%d",&a);
    printf("Enter denominator b:");
    scanf("%d",&b);
    if(b==0)
    {
        printf("Denominator cannot be negative .Try Again...");
    }
    else
    {
        int quotient;
        int remainder;
        quotient=a/b;
        remainder=a%b;

        printf("Quotient of the above two number is %d\n",quotient);
        printf("Remainder of the above two number is %d",remainder);
    }
}