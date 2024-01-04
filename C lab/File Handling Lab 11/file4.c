#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    FILE *fp;
    fp=fopen("file.txt","a");
    printf("Enter a string you want to append:");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}