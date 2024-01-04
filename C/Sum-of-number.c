#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int remainder;
    printf("Enter a integer\n");
    scanf("%d",&n);
    while(n > 0)
    {
        remainder = n%10;
        sum = sum + remainder;
        n = n/10;
    }

printf("Sum of digits of %d",sum);
return 0;
}