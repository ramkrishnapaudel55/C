//  arguement and No return type

#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    sum(n);

    return 0;
}

int sum(int n)
{
    int arr[5];
    int i=0;
    int j,rem;
    while(n!=0)
    {
        rem=n%10;
        arr[i]=rem;
        i++;
        n=n/10;
    }
    for(j=i-1;j>-1;j--)
    {
        printf(" %d ",arr[j]);
    }
    return 0;
}


