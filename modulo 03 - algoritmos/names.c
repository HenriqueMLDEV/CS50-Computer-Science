#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Henrique", "Percy", "Ron"};
    for (int i =0; i<7; i++){
        if(strcmp(names[i], "Ron") == 0)
        {
            printf("Encontrei :) \n");
            return 0;
        }
        printf("Não Encontrei :( \n");
        return 1;
    }
}
