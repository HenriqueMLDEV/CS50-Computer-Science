#include <cs50.h>
#include <stdio.h>

// Prototype
void meow(int n);

int main (void)
{
     meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");

    }

}



