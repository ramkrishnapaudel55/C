// With arguement and With return type

#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{
    int a, b, c;
    printf("Enter the first and second number:");
    scanf("%d%d",&a,&b);
    c = sum(a, b);
    printf("The sum of two number is:%d",c);

    return 0;
    getch();
     
}


int sum(int a, int b)
{
    int sum;
    sum = a+b;

    return sum;
}