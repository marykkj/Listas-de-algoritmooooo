#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    ordena(&x, &y);

    printf("Maior: %d, Menor: %d\n", x, y);
    return 0;
}
