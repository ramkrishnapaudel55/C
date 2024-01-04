// No arguement and No return type

#include<stdio.h>
#include<conio.h>
void sum(void);
int main()
{
     sum();
     return 0;
     getch();
}

void sum(void)
{
    int a,b,c;
    printf("Enter any two number:");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("The sum is %d",c);
    
}
