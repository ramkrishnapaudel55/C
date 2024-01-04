#include<stdio.h>
void main()
{
    int arr[100],i,size;
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
    int  smallest= arr[0];
    int  largest= arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        else{
            largest=arr[i];
        }
    }
    printf("\n smallest number is = %d",smallest);
    printf("\n largest number is = %d",largest);


}