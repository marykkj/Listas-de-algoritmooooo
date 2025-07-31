#include <stdio.h>

int main() {
    float vet[10];
    for (int i = 0; i < 10; i++)
        printf("Endereco de vet[%d] = %p\n", i, (void*)&vet[i]);

    return 0;
}
