#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i;
printf("Enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]>='a'&&str[i]<='z')
    {
        str[i]=str[i]-32;
        printf("Upper case string is:%s",str);
    }
    else if(str[i]>='A'&&str[i]<='Z')
    {
        str[i]=str[i]+32;
        printf("lower case string is:%s",str);
    }
        else{
        printf("\n");
        printf("        Invalid inputs!!\n Please Run this program again considering our terms and condition \n\n");
    }
}

return 0;
}