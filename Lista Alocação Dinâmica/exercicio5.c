#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *vetor = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero X: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
        }
    }
    free(vetor);
    return 0;
}
