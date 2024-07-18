/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a==10){
        printf("number is 10");
    }
    else if (a==50){
        printf("number is 50");
    }
    else if (a==100){
        printf("number is 100");
    }
    else{
        printf("cant identify number");
    }

    return 0;
}
