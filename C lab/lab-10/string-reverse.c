#include <stdio.h>
#include <string.h>
void main()
{
    char str[50],rev;
    printf("Please enter the name:");
    gets(str);
    rev = strrev(str);
    printf("The given string is : %s\n", str);
    printf("After reversing string is : %s", rev);
}