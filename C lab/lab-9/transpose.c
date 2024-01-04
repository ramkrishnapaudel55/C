#include<stdio.h>
void main()
{
    int a[100][100],i,j,size;
    printf("Enter the size of the row & column:");
    scanf("%d",&size);
    printf("Enter the first matrix element:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Display
    printf("Given matrix:\n");
    for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        } 
   
    // transpose
    printf("The transpose matrix is: \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}