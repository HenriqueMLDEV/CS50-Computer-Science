#include <cs50.h>
#include <stdio.h>
int main() {
int height;
do {
    printf("Height: ");
    scanf("%d", &height);
} while (height < 1 || height > 8);

for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= height - i; j++) {
        printf(" ");
    }
    for (int j = 1; j <= i; j++) {
        printf("#");
    }

    printf(" ");
    printf(" ");

    for (int j = 1; j <= i; j++) {
        printf("#");
    }

    printf("\n");
}

return 0;
}
