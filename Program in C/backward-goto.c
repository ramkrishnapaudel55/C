#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    xyz:
    printf("%d\t",i);
    i++;
    if(i<=5)
    goto xyz;
    getch();
}