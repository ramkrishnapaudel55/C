#include <stdio.h>

void main()
{
    int a,b,c;
    int greater;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);

    greater = (a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("\nThe greater number is: %d", greater);
}

