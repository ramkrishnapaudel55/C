#include<stdio.h>
int main()
{
    int n,rem,sum=0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(sum == original)
    {
        printf("Palindrome number:");
    }
    else{
        printf("Not a palindrome:");
    }
    return 0;
}