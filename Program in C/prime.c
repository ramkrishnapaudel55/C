#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count = count+1;
    }
    if(count == 2)
    {
        printf("Given number is a prime number:");
    }
    else{
        printf("Given number is not a prime number:");
    }
    return 0;
    getch();
}