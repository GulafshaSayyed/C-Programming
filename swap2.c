#include<stdio.h>
int main()
{
    int a,b;
    printf("Programm to swap without third variable\n\n");
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a is %d and b is %d",a,b);
}