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
            scanf("%d",&mat1[i][j]);
        }
    }

    // Display
    printf("Given matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Upper triangular matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j){
                printf("%d\t",mat1[i][j]);
            }
            else{
                printf("_\t");
            }
        }
        printf("\n");
    }
}

