#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{

    // Peergunta ao Usuário se ele aceita calcular o IMC.
    char answer = get_char("Você aceita calcular seu IMC?(\033[1;32my\033[0m ou \033[1;31mn\033[0m): ");

    // Condicionais.
    if (answer == 'y' || answer == 'Y')
    {

        // Armazena os dados em variáveis e faz o calculo do IMC.
        float p = get_float("Qual o seu peso em KG? ");
        float al = get_float("Qual sua altura em metros? ");
        float imc = p / pow(al, 2);

        // Condicionais relacionadas ao resultado do IMC.
        if (imc < 18.5)
        {
            printf("O seu IMC é %.2f, você está \033[1;31mabaixo\033[0m do peso recomendado.\n", imc);
        }
        else if (imc >= 18.5 && imc <= 24.9)
        {
        printf("\033[1;32mSeu IMC é %.2f, você está com o peso recomendado, meus parabens!\033[0m\n", imc);
        }
        else
        {
            printf("O seu IMC é %.2f, você esta \033[1;31macima\033[0m do peso recomendado.\n", imc);
        }
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("OK, mas se mudar de ideia estarei aqui!");
    }
}
