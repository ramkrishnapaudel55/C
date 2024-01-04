#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%3d ",i);
        }
        printf("\n");
    }
}