#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int reversed = 0;
    int remainder;
    int original;
    printf("Enter a number in 3 digits:");
    scanf("%d",&n);
    original = n;
    while(n>0)
    {
       remainder = n%10;
       reversed = reversed*10 + remainder;
       n =n/10;

    }
    if(original == reversed)
    printf("\n%d is a palindrome number",original);
    else{
        printf("%d is not a palindrome number",original);
    }
    return 0;
    getch();
}