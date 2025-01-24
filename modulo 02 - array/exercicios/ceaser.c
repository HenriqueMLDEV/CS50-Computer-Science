#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./cesar + key\n");
        return 0;
    }

    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("./cesar + key\n");
            return 0;
        }
    }

    int c = atoi(key);

    string text = get_string("Texto: ");
    int size = strlen(text);
    char textCod[size + c];

    for (int i = 0; i < size; i++)
    {
        if (isalpha(text[i]))
        {
            char caractere;
            if (isupper(text[i]))
            {
                caractere = 'A';
            }
            else
            {
                caractere = 'a';
            }
            textCod[i] = (text[i] - caractere + c) % 26 + caractere;
        }
        else
        {
            textCod[i] = text[i];
        }
    }
    textCod[size] = '\0';
    printf("Texto Codificado: %s\n", textCod);
    return 0;
}
