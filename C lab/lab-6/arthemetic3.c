// Function no argument and return type
#include<stdio.h>
#include<conio.h>
int sum(void);
int sub(void);
int mul(void);
int div(void);
int main()
{
    int c,d,e,f;

 
    c = sum();
    printf("The sum of two number is: %d\n",c);
    d = sub();
    printf("The sub of two number is: %d\n",d);
    e = mul();
    printf("The mul of two number is: %d\n",e);
    f = div();
    printf("The div of two number is: %d\n",f);

    return 0;
    getch();
}

int sum(void){
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum = a+b;
    return sum;
    

}
int sub(void){
    int a,b,sub;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sub = a-b;
    return sub;
    

}
int mul(void){
    int a,b,mul;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    mul = a*b;
    return mul;
    

}
int div(void){
    int a,b,div;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    div = a/b;
    return div;
    

}

