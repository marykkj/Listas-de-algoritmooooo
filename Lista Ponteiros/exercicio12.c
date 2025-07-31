#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float numero = 5.75, parteFrac;
    int parteInt;
    frac(numero, &parteInt, &parteFrac);
    printf("Inteira: %d, Fracionária: %.2f\n", parteInt, parteFrac);
    return 0;
}