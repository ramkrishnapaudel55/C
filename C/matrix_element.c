#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int mat[3][3];
    int square[3][3];
    printf("Enter the matrix element:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    // processing steps
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            square[i][j] = mat[i][j]*mat[i][j];
        }
    }

    // Print the value of squared matrix element
    printf("The value of squared matrix element is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",square[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();
}