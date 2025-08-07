#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteados[6], jogador[6], acertos = 0;
    printf("Digite os 6 numeros sorteados:\n");
    for(int i = 0; i < 6; i++) scanf("%d", &sorteados[i]);
    printf("Digite os 6 numeros do jogador:\n");
    for(int i = 0; i < 6; i++) scanf("%d", &jogador[i]);
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(sorteados[i] == jogador[j]) acertos++;
        }
    }
    int *acertos_vetor = malloc(acertos * sizeof(int));
    int k = 0;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(sorteados[i] == jogador[j]) {
                acertos_vetor[k++] = sorteados[i];
            }
        }
    }
    printf("Sorteados: ");
    for(int i = 0; i < 6; i++) printf("%d ", sorteados[i]);
    printf("\nAcertos: ");
    for(int i = 0; i < acertos; i++) printf("%d ", acertos_vetor[i]);
    free(acertos_vetor);
    return 0;
}
