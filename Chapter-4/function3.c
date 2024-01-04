// No arguement and with return type

#include<stdio.h>
#include<conio.h>
int sum(void);
int main()
{
    int c;
    c = sum();
    printf("The sum is %d",c);
    return 0;
    getch();

}

int sum(void)
{
    int x, y, z;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    z=x+y;
    return z;
}
