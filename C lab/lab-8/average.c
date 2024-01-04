#include<stdio.h>
void main()
{
    int arr[100],i,size,sum=0,avg;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter %d element of array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //display
     for(i=0;i<size;i++)
    {
        printf("%3d",arr[i]);
    }

    for(i=0;i<size;i++)
    {
        sum = sum+arr[i];
        avg = sum/size;
    } 
    printf("\nThe sum of 1D array is = %d",sum);
    printf("\nThe average of 1D array is = %d",avg);

}