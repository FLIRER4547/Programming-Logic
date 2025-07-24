#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string answer = get_string("What your name? ");

    printf("Hello, \033[1;32m%s\033[0m\n",answer);
}
