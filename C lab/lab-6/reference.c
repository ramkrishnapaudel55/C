// Function with no argument and no return type
#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
int main()
{
    int a = 20,b = 10;
    printf(" Before swap a = %d and b = %d\n",a,b);
    sum(&a,&b);
    printf(" After swap a = %d and b = %d\n",a,b);
    return 0;
    getch();
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}
