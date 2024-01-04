#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    k = 1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++,k++)
        {
            printf("\t%d",k);
        }
        printf("\n");
    }
    getch();
    return 0;
}