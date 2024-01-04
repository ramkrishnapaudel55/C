// With arguement and No return type

#include<stdio.h>
#include<conio.h>
void sum(int, int);
int main()
{
    int a, b;
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);
    sum(a ,b);
    return 0;
    getch();
}

void sum(int a, int b)
{
    int c;
    c = a+b;
    printf("The sum of %d and %d is %d",a,b,c);
}
