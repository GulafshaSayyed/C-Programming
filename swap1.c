#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Programm to swap with third variable\n\n");
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    t=a;
    a=b;
    b=t;

    printf("After swapping a is %d and b is %d",a,b);
}