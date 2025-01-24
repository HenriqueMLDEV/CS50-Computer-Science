#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura, linha, coluna, espacos;
    do{
        altura = get_int("Insira o tamanho da altura (entre 1 e 8):  ");
    } while (altura < 1 || altura > 8);

    for (linha = 0; linha < altura; linha++){
        for (espacos=0; espacos < (altura - linha - 1); espacos++){
            printf(" ");
        }
        for (coluna=0; coluna <= linha; coluna++){
            printf("#");
        }
        printf("  ")
        for (coluna=0; coluna <= linha; coluna++){
            printf("#");
        }
        printf("\n");
    }
}
