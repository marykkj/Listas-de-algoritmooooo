#include <stdio.h>

int main() {
    int x, y;

    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    if (&x > &y)
        printf("Endereco de x (%p) eh maior\n", (void*)&x);
    else
        printf("Endereco de y (%p) eh maior\n", (void*)&y);

    return 0;
}
