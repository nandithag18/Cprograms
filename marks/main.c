/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  int a;
    printf("enter marks");
    scanf("%d",&a);
    if(100>=a && 90<=a){
        printf("A GRADE");
    }
    else if(90>a && 80<=a){
        printf("B GRADE");
    }
    else if (80>a && 70<=a){
        printf("C GRADE");
    }
    else if (70>a && 60<=a){
        printf("D GRADE");
    }
    else{
        printf("FAIL");
    }

    return 0;
}
