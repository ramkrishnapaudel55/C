#include<stdio.h>
#define MAX 100
void toggle(char * string);
int main()
{
    char string[MAX];
    printf("Enter a string need to be toggle:");
    gets(string);
    toggle(string);
    printf("The final output after toggling the string is :\n\n\n\t\t");
    printf("%s\n\n\n",string);
    return 0;
}

void toggle(char * string)
{
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]>='a'&&string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        else if(string[i]>='A'&&string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
        i++;
    }
}