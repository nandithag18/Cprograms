/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int a;
    printf("enter number");
    scanf("%d",&a);
    if(a>=10 && a<=100){
         if (a%2==0){
            printf("even");
         }
        else{
            printf("odd");
        }
    }
    else{
        printf("NOT BETWEEN 10 ND 100");
    }
   

    return 0;
}
