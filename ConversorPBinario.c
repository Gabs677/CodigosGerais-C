/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void binario(int n)
{
    if (n == 0)
    {
        printf("%d", n);
    }
    else
    {
        binario(n/2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;
    
    printf("Digite um numero decimal: ");
    scanf("%d", &n);
    
    binario(n);
    
    return 0;
}
