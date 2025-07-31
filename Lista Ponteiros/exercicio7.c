#include <stdio.h>

void soma(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    soma(&a, &b);

    printf("a (modificado): %d, b: %d\n", a, b);
    return 0;
}
