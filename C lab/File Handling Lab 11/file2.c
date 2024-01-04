#include<stdio.h>
#include<string.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("file.txt","w");
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}