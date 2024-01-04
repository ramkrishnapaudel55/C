#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*\t",j);
        }
        printf("\n");
    }
}