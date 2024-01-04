#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    int add,sub,mul,div;
    while(1)
    {
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter any two number:");
        scanf("%d%d",&a,&b);
        add = a+b;
        printf("The addition of two number is = %d\n",add);
        break;

        case 2:
        printf("Enter any two number:");
        scanf("%d%d",&a,&b);
        sub = a-b;
        printf("The substraction of two number is = %d\n",sub);
        break;

        case 3:
        printf("Enter any two number:");
        scanf("%d%d",&a,&b);
        mul = a*b;
        printf("The mulplication of two number is = %d\n",mul);
        break;

        case 4:
        printf("Enter any two number:");
        scanf("%d%d",&a,&b);
        div = a/b;
        printf("The division of two number is = %d\n",div);
        break;

        case 5:
        exit(0);

       
        default:
        printf("Invalid input");
    }
    }
    printf("Thank you for using our calculator:");
    
    return 0;
}