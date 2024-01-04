#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial of a negative number doesn't exist:");
    }
    else{
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    }
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}