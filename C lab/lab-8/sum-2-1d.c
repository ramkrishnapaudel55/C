#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],i;
    int size;
    printf("Enter the size of first array element:");
    scanf("%d",&size);
    printf("Enter the element of first array matrix: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element of first array matrix: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }

    // sum
    printf("The sum of two 1d matrix is:");
    for(i=0;i<size;i++)
    {
        c[i]=a[i]+b[i];
    }

    for(i=0;i<size;i++)
    {
    printf("%3d",c[i]);
    }
}