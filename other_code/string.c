#include<stdio.h>
#include<string.h>
void main()
{
    int i, len;
    char str[100];
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s",str);
    for(i=len;str[i]=0;i--)
    {
        printf("%s",str[i]);
    }
}