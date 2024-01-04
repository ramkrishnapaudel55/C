#include<stdio.h>
void main()
{
    int arr[100],i,size,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter %d element of the array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<=size;i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of the given array is = %d",sum);
}