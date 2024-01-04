#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    int i;
    // char ch = 'a';
    // char str[100] = "I am Ram Krishna Paudel.";
    char str[100];
    fp=fopen("file.txt","w");
    // fputc(ch,fp);
    printf("Enter the name:");
    gets(str);
    for(i=0;i!=strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    // fputs(ch,fp);
    fclose(fp);
}