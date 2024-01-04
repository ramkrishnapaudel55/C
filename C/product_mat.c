#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int mat1[3][3];
    int mat2[3][3];
    int product[3][3];

    // Asking the user for the matrix element input
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

    // Getting product of given matrix element 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            product[i][j] = mat1[i][j]*mat2[i][j];
        }
    }

    // Displaying the result of product matrix
    printf("The product of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();
}