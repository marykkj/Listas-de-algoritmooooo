#include <stdio.h>

int somaDobros(int *a, int *b) {
    *a *= 2;
    *b *= 2;
    return *a + *b;
}

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    int soma = somaDobros(&x, &y);
    printf("Soma dos dobros: %d\n", soma);
    return 0;
}
