#include <cs50.h>
#include <stdio.h>

int main(void)
{

    printf("hello, world!\n");
    string answer = get_string("Qual o seu nome? ");
    printf("hello, %s\n", answer);
}
