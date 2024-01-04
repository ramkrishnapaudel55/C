#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 10; i++)
    {
        for ( j = 10; j > i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <=i; k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
  getch();  
}