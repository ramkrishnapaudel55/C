#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    FILE *fp;
    fp=fopen("file.txt","r");
    fgets(str,100,fp);
    printf("%s",str);
    fclose(fp);
}