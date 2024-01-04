#include<stdio.h>
int isPrime(int n, int i);
int main()
{
    int n,p;
    printf("Enter the number that you want to find prime number:");
    scanf("%d",&n);
    p=isPrime(n, n/2);
    if(p==0)
    {
        printf("%d is a prime number:");
    }
    else
    {
        printf("%d is not a prime number:");
    }
    return 0;
}
int isPrime(int n, int i)
{
    if(i==1)
    return 1;
    if(n%i==0)
    return 0;
    return isPrime(n,i-1);
}