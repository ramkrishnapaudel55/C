#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum = sum+i;
    }
    if(temp==sum)
    {
        printf("\n%d is a perfect number");
    }
    else{
        printf("%d is a perfect number");
    }
    
    return 0;
}