#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL, n, tamanho = 0;
    while(1) {
        scanf("%d", &n);
        if(n < 0) break;
        tamanho++;
        vetor = realloc(vetor, tamanho * sizeof(int));
        vetor[tamanho - 1] = n;
    }
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    free(vetor);
    return 0;
}
