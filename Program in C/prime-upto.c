#include<stdio.h>
int main()
{
    int i,n,m,count;
    printf("Enter the number that you want to print prime number");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
    count=0;
    for(i=1;i<=n;i++)
    {
        if(m%i==0)
        count = count + 1;
    }
    if(count==2)
    {
        printf("%d\n",m);
    }
    }
    
    return 0;
}