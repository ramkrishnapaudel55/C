#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    int i=10;
    char str[100]="Ram Krishna Paudel";
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("File Doesn't exist");
        exit(1);
    }
    fprintf(fp,"%d%s",i,str);
    fclose(fp);
}