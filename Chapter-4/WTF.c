#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char str[20]={"ENGINEERING"};

    printf("Right angle triangle of the word is: \n");
    for(i=0;i<strlen(str);i++)
    {
        if(i!=0){
        printf("%d",i);
        }
        for(j=0;j<i;j++)
        {
            printf("%c\t",str[j]);
        }
        printf("\n");
    }
}

