#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float numero = get_float("Digite um número: ");
    float numero2 = get_float("digite outro número: ");
    float soma = numero + numero2;
    printf("A soma entre %f e %f é igual a: \033[1;4;35m%.2f\033[0m",numero,numero2,soma);
}

