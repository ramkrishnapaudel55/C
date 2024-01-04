#include<stdio.h>
int main()
{
    int n, remainder, sum=0, temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        
        remainder=n%10;
        sum = (sum*10)+remainder;
        n = n/10;

    }
    if(temp == sum)
    {
    printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not a palindrome number");
    }
    return 0;
    
}