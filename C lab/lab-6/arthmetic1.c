// Function with argument and no return type
#include<stdio.h>
#include<conio.h>
void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main()
{
    int a,b;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);

    return 0;
    getch();
}

void sum(int a, int b){
    int sum;
    sum = a+b;
    printf("The sum of two number is: %d\n",sum);

}
void sub(int a, int b){
    int sub;
    sub = a-b;
    printf("The sub of two number is: %d\n",sub);

}
void mul(int a, int b){
    int mul;
    mul = a*b;
    printf("The mul of two number is: %d\n",mul);

}
void div(int a, int b){
    int div;
    div = a/b;
    printf("The div of two number is: %d\n",div);

}
