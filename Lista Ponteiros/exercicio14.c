#include <stdio.h>
#include <math.h>

void potencia(float x, float y, float *res1, float *res2) {
    *res1 = pow(x, y);
    *res2 = pow(x, 2) + pow(y, 2);
}

int main() {
    float a = 2, b = 3, r1, r2;
    potencia(a, b, &r1, &r2);
    printf("x^y: %.2f, x²+y²: %.2f\n", r1, r2);
    return 0;
}