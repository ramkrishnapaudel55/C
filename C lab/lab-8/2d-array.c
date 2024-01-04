#include<stdio.h>
void main()
{
    int a[100][100],i,j,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // display
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}