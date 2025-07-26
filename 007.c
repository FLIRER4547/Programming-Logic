#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{


    // Loop até para se caso a resposta for inválida.
    char answer;
    do
    {

        // Pergunta se o usuário desea fazer o cálculo de IMC.
        answer = get_char("Você aceita calcular seu IMC?(\033[1;32my\033[0m ou \033[1;31mn\033[0m): ");
        if (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            printf("\033[1;4;31mResposta inválida, tente novamente...\033[0m\n");
        }
    } while (answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n');


    // Condicionais.
    if (answer == 'y' || answer == 'Y')
    {

        // Faz o programa funcionar 'eternamente'.
        while (true)
        {

            // Armazena os dados em variáveis e faz o calculo do IMC.
            float p, al;
            do
            {

                // Armazena o peso na variável 'p'.
                p = get_float("Seu peso em Kg: ");
            } while (p <= 0);

            do
            {
                // Armazena a altura na váriável 'al'.
                al = get_float("Sua altura em metros: ");
            } while (al <= 0);

            float imc = p / pow(al, 2);

            // Condicionais relacionadas ao resultado do IMC.
            if (imc < 18.5)
            {

                // IMC menor que 18.5, significa peso abaixo do recomendado.
                printf("O seu IMC é %.2f, você está \033[1;31mabaixo\033[0m do peso recomendado.\n", imc);
            }
            else if (imc >= 18.5 && imc <= 24.9)
            {

                // Se for entre 18.5 e 24.9, está bom.
            printf("\033[1;32mSeu IMC é %.2f, você está com o peso recomendado, meus parabens!\033[0m\n", imc);
            }
            else
            {

                // IMC maior que 24.9, significa sobrepeso.
                printf("O seu IMC é %.2f, você está \033[1;31macima\033[0m do peso recomendado.\n", imc);
            }

            // Pergunta se o programa será reiniciado.
            char reiniciar = get_char("\033[1;33mDigite 'R' para reiniciar ou 'E' para encerrar a calculadora:\033[0m ");

            // Reinicia o Programa.
            if (reiniciar == 'r' || reiniciar == 'R' )
            {
            printf("\033[1;32mReiniciando...\033[0m\n");
            sleep(2);
            }

            // Encerra o programa.
            else
            {
                printf("\033[1;31mEncerrando...\033[0m\n");
                sleep(2);
                break;
            }
        }
    }

    // Se o usuário negar o cálculo.
    else if (answer == 'n' || answer == 'N')
    {
        printf("OK, mas se mudar de ideia estarei aqui!\n");
    }
}
