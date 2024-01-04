#include<stdio.h>
int main()
{
    int n, n1, n2, count, i,temp;
    printf("Enter the interval of the number that you want to find prime:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    printf("prime number between %d and %d are: ",n1,n2);
    for(n=n1;n<=n2;n++)
    {
        count=0;
        for(i=1;i<=n2;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count==2)
        {
            printf("%3d",n);
        }
    }
    return 0;
}