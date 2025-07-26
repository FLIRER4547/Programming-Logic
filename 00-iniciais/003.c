#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Pergunta o nome do usuário.
    string name = get_string("Qual seu nome? ");

    // Faz uma saudação ao usuário.
    printf("Olá, %s\n", name);
}
