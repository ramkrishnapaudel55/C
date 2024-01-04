#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("1\t");
        }
        printf("\n");
    }
}