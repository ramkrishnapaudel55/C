#include<stdio.h>
void main()
{
    int i,j;
    int mat1[3][3];
    int sum=0;
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

    printf("Diagonal sum: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j){
                sum=sum+mat1[i][j];
            }
        }
    }
    printf("\n%d",sum);
}

