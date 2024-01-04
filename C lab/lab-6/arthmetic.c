// Function with no argument and no return type
#include<stdio.h>
#include<conio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
int main()
{
    sum();
    sub();
    mul();
    div();

    return 0;
    getch();
}

void sum(void){
    int a,b,sum;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of two number is: %d\n",sum);

}
void sub(void){
    int a,b,sub;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sub = a-b;
    printf("The substraction of two number is: %d\n",sub);
}
void mul(void){
    int a,b,mul;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    mul = a*b;
    printf("The multiplication of two number is: %d\n",mul);
}
void div(void){
    int a,b,div;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    div = a/b;
    printf("The division of two number is: %d\n",div);
}