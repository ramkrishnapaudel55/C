#include<stdio.h>
#include<conio.h>
int main()
{
    system("color 2");
    int i;
    int n;
    printf("Emter a number:  ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    printf("\t\t\t%d * %d = %d\n",n,i,n*i);
    }
    return 0;
    getch();
}