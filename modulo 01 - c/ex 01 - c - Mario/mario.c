#include <cs50.h>
#include <stdio.h>

int main()
{
    int altura;

    do
    {
        printf("Insira o tamanho da altura (entre 1 e 8): ");
        scanf("%d", &altura);
    }
    while (altura < 1 || altura > 8);

    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= altura - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
