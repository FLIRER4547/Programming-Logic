#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Pede ao usuárioos número a serem calculados.
    long numero = get_long("Digite um número: ");
    long numero2 = get_long("digite outro número: ");

    // Faz a soma e mostra no terminal.
    printf("a soma entre eles é igual a: %li\n", numero + numero2);
}
