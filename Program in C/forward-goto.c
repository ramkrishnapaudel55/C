#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=6;
    if(a<b)
    goto xyz;
    else 
    goto pqr;
    xyz:
    printf("%d is smaller than %d",a,b);
    goto last;
    pqr:
    printf("%d is smaller than %d",b,a);
    goto last;
    last:
    getch();
}




//  Goto statement is used to alter the nornal sequence of program execution by transferring control to same part of program

// The label can be before or after goto statement.

// If the label is before the statement goto label a loop will be formed and some statement will be executed repeatedly. 
// This type of jump is known as backward jump.

// If the label is after the statement goto label some statement will be skipped and the jump as forward jump.
