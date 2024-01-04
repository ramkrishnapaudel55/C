#include<stdio.h>
int main()
{
    int n;
    int temp;
    int remainder;
    int sum=0;
    int cube;
    printf("Enter the number in 3 digits:");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        remainder = n%10;
        cube = (remainder*remainder*remainder);
        sum = sum + cube;
        n = n/10;
        

    }
    if(temp == sum){
        printf("Given number is a armstrong number:");
    }
    else{
        printf("Given number is not a armstrong number;");
    }
    return 0;
}