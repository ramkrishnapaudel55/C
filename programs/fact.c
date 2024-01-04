#include<stdio.h>
int main()
{
int i=1;
int fact=1;
int n;
printf("Enter a number:");
scanf("%d",&n);
while(i<=n)
{
fact = fact*i;
i++;
}
printf("%d = \n%d",n,fact);
return 0;
}
