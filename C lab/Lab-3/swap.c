#include<stdio.h>
int main()
{
    int a,b,temp,temp1;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    temp = a;
    temp1 = b;
    a = temp1;
    b = temp;
    printf("a is %d\n b is %d",a,b);
    return 0;

    
}