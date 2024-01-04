#include<stdio.h>
void fabo(int);
void main()
{
    int a=0,b=1,n;
    printf("Enter the first and second number:");
    scanf("%d",&n);
    printf("%3d%3d",a,b);
    fabo(n-2);
}

void fabo(int n)
{
    static int a=0,b=1,c;
    if(n>0)
    {
    c=a+b;
    printf("%3d",c);
    a=b;
    b=c;
    fabo(n-1);
    }
}