#include <stdio.h>

int main() {
    int vet[5], *p;

    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vet[i]);

    p = vet;

    for (int i = 0; i < 5; i++)
        printf("Dobro: %d\n", *(p + i) * 2);

    return 0;
}
