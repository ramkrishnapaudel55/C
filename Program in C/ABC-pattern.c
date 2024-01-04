#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j;
    char ch = 'A';
    for (i = 1; i <= 10; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf(" %c",ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
  getch();  
}
