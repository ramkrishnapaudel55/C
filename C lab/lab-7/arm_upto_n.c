#include<stdio.h>
void main()
{
    int n, rem, sum, temp, cube;
    int low, high;
    printf("Enter the starting range: ");
    scanf("%d",&low);
    printf("Enter the ending range: ");
    scanf("%d",&high);
    printf("The armstrong number from %d and %d are :\n",low,high);
    for(n=low;n<=high;n++)
    {
        temp=n;
        sum=0;
        
        while(temp!=0)
        {
            rem=temp%10;
            cube=rem*rem*rem;
            sum=sum+cube;
            temp=temp/10;
        }
        if(sum==n)
        {
            printf("%3d\n",n);
        }
    }
}