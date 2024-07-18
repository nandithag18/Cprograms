/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{char n;
    printf("enter letter");
    scanf("%c",&n);
    switch(n){
        case 'a':
        printf("Vowel a");
        break;
        case 'e':
        printf("vowel e");
        break;
        case 'i':
        printf("vowel i");
        break;
        case 'o':
        printf("vowel o");
        break;
        case 'u':
        printf("vowel u");
        break;
        default:
        printf("consonant");
        break;
    }
    
    

    return 0;
}
