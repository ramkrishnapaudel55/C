#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n == 153)
    {
        printf("Given number is armstrong:");
    }
    else{
        printf("Given number is not a armstrong number:");
    }
    return 0;
}