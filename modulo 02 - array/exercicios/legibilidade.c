#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int ColemanForm(int letras, int frases, int palavras);

int main(void)
{
    string texto = get_string("Seu Texto: ");
    int letras = 0;
    int palavras = 1;
    int frases = 0;
    int tamanhoTexto = strlen(texto);

    for (int i = 0; i <= tamanhoTexto; i++)
    {
        if (isalpha(texto[i]))
        {
            letras++;
        }
        if (isspace(texto[i]))
        {
            palavras++;
        }
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            frases++;
        }
    }

    printf("Grade: %d\n", ColemanForm(letras, frases, palavras));
}

int ColemanForm(int letras, int frases, int palavras)
{
    float index;
    float L = ((float) letras / palavras) * 100;
    float S = ((float) frases / palavras) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);

    if (index < 1)
    {
        printf("Grade menor que 1\n");
    }
    if (index > 16)
    {
        printf("Grade+\n");
    }
    return index;
}
