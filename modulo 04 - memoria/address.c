#include <cs50.h>
#include <stdio.h>

int main(void)
{
char *s = "HI!";
printf("%s\n", &s[0]);
printf("%s\n", &s[1]);
printf("%s\n", &s[2]);
}
