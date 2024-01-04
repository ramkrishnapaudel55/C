#include<stdio.h>
int main()
{
    int n,rem,large=0;
    printf("Enter the first number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        if(large<rem)
        {
            large=rem;
        }
        n=n/10;
    }
    printf("\nLarge number of a given number is = %d",large);
    return 0;
}