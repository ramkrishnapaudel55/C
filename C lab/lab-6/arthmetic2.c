// Function argument and return type
#include<stdio.h>
#include<conio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b,c,d,e,f;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    c = sum(a,b);
    d = sub(a,b);
    e = mul(a,b);
    f = div(a,b);

    printf("The sum of two number is: %d\n",c);
    printf("The sub of two number is: %d\n",d);
    printf("The mul of two number is: %d\n",e);
    printf("The div of two number is: %d\n",f);

    return 0;
    getch();
}

int sum(int a, int b){
    int sum;
    sum = a+b;
    return sum;

}

int sub(int a, int b){
    int sub;
    sub = a-b;
    return sub;

}

int mul(int a, int b){
    int mul;
    mul = a*b;
    return mul;

}

int div(int a, int b){
    int div;
    div = a/b;
    return div;

}
