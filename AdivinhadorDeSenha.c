/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    int senha[4] = {2, 0, 0, 2};
    int adivinha[4] = {0, 0, 0, 0};
    
    printf("Senha: ");
    for (i = 0; i < 4; i++) {
        printf("%d", senha[i]);
    }
    
    printf("\nVamos adivinhar a senha\n");
    
    for (i = 0; i < 4; i++) {
        while (adivinha[i] != senha[i]) {
            adivinha[i]++;
        }
    }

    printf("Senha adivinhada: ");
    for (i = 0; i < 4; i++) {
        printf("%d", adivinha[i]);
    }
        
    return 0;
}