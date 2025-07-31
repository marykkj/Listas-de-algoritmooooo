#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;
    if (delta < 0) return 0;
    if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    }
    *X1 = (-B + sqrt(delta)) / (2 * A);
    *X2 = (-B - sqrt(delta)) / (2 * A);
    return 2;
}

int main() {
    float x1, x2;
    int n = raizes(1, -3, 2, &x1, &x2);
    printf("Nº de raízes: %d\n", n);
    if (n == 1) printf("X: %.2f\n", x1);
    if (n == 2) printf("X1: %.2f, X2: %.2f\n", x1, x2);
    return 0;
}