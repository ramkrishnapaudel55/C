// Function with no argument and no return type
#include<stdio.h>
#include<conio.h>
int sum(int, int);
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c = sum(a,b);
    printf("The sum of two number is %d",c);

    return 0;
    getch();
}

int sum(int a,int b){
    int sum;
    sum = a+b;
    return sum;

}
