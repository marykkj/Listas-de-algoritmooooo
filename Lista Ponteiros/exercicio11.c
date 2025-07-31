#include <stdio.h>

int main() {
    int vet[5];

    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &vet[i]);

    for (int i = 0; i < 5; i++)
        printf("vet[%d] = %d, endereco: %p\n", i, vet[i], (void*)&vet[i]);

    return 0;
}
