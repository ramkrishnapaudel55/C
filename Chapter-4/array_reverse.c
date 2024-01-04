#include<stdio.h>
void main()
{
    int arr[10],i;
    printf("Enter the element of the array: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array elements are: \n");
    for(i=9;i>=0;i--)
    {
        printf("%3d",arr[i]);
    }
}