#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Pede os números ao usuário.
    int x = get_int("digite um número inteiro: ");

    // Faz um calculo para saber se o número é ímpar ou par.
    int y = x % 2;

    // Condiocinais
    if (y == 0)
    {

        // Se for par.
        printf("O número \033[1;32m%i é par\033[0m\n", x);
    }
    else
    {

        // Se for ímpar.
        printf("O número \033[1;35m%i é ímpar\033[0m\n", x);
    }
}
