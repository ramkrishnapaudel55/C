#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
    if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
    }
    printf("\n%s",str);
    return 0;
}