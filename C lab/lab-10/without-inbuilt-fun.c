#include <stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int len,i;
    printf("Enter the name that you want to reverse:");
    gets(str);
    len = strlen(str);
    for(i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}