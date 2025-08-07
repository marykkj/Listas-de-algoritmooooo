#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pares = 0, impares = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *vetor = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    free(vetor);
    return 0;
}
