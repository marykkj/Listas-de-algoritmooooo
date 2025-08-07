#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);
    if(n < 10) n = 10;
    double *vetor = malloc(n * sizeof(double));
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        vetor[i] = rand() % 101;
    }
    for(int i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    free(vetor);
    return 0;
}
