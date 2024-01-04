#include<stdio.h>
void main()
{
    int n,i;
    float x,t=1,sum=1;
    printf("Enter the number of series :");
    scanf("%d",&n);
    printf("Enter the value of x :");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        t=(t*x/i);
        sum=sum+t;
    }
    printf("The sum of the series:%f",sum);

}