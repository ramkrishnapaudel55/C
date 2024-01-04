#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j] = mat1[i][j]+mat2[i][j];
        }
    }
    printf("The sum of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();
}