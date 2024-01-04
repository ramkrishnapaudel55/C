#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int b;
    int sum;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    sum = a+b;
    printf("Sum is:%d",sum);
    return 0;
    getch();
}