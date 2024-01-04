#include<stdio.h>
int fibo(int);
void main()
{
    int f,i,n;
    printf("Enter the first and second number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fibo(i);
        printf("%3d",f);
    }
}

int fibo(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return (fibo(n-1)+fibo(n-2));
}