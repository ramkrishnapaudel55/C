#include<stdio.h>
void main()
{
    int n,i;
    float x,sum,t;
    printf("Enter the value of x :");
    scanf("%f",&x);
    printf("Enter the value of n :");
    scanf("%d",&n);
    x=x*3.1412/180;
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    printf("The sum of the given series:%f",sum);
}