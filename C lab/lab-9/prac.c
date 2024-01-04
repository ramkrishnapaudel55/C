#include<stdio.h>
void main()
{
    int i,j;
    int mat1[3][3];
    printf("Enter the elements for matrix first\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
     // Display
    printf("Given matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=%d\t\t",i,j,mat1[i][j]);
        }
        printf("\n\n");
    }
}