#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        ch = ch-32;
        printf("The character in upper case is : %c",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        ch = ch + 32;
        printf("The character in lower case is : %c",ch);
    }
    else{
        printf("\n");
        printf("        Invalid inputs!!\n Please Run this program again\n\n");
    }
    return 0;
    getch();

}