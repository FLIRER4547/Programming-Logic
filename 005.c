#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Pede ao usuários os número que serão usados na divisão.
    float x = get_float("Digite um número: ");
    float y = get_float("Digite outro número: ");

    // Divisão entre as variáveis.
    float d = x / y;

    // Mostra ao Usuário o resultado da divisão.
    printf("%.2f dividido por %.2f é igual a: %.2f\n", x, y, d);
}
