#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf(" \t");
        }
        for(k=1;k<i;k++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}