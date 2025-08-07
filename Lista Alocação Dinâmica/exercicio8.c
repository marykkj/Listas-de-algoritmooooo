#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = calloc(1500, sizeof(int));
    int correto = 1;
    for(int i = 0; i < 1500; i++) {
        if(vetor[i] != 0) {
            correto = 0;
            break;
        }
    }
    if(correto) printf("Todos os elementos estao zerados.\n");
    else printf("Ha elementos diferentes de zero.\n");
    free(vetor);
    return 0;
}
