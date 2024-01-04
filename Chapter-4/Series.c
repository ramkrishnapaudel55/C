#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x;
    float y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    y = 1 + pow(x,2)/(2*1) + pow(x,3)/(3*2*1) + pow(x,6)/(6*5*4*3*2*1);
    printf("The sum of the given series is:",y);
    return 0;
}
