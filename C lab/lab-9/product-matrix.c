#include<stdio.h>
void main()
{
    int i,j,k;
    int mat1[3][3];
    int mat2[3][3];
    int product[3][3];
    printf("Enter the elements for matrix first\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    // Display
    printf("Given first matrix element:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Given second matrix element:-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            product[i][j]=0;
            for(k=0;k<3;k++)
            {
            product[i][j] = product[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The product of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
}