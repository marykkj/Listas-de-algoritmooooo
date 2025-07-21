#include <stdio.h>

float mediaA(float x, float y, float z) {
    return (x + y + z) / 3;
}

float mediaP(float x, float y, float z) {
    return (x*5 + y*3 + z*2) / 10;
}
int main() {
    float n1, n2, n3;
    char tipo;
    scanf("%f %f %f %c", &n1, &n2, &n3, &tipo);
    if (tipo == 'A') printf("Media: %.2f\n", mediaA(n1, n2, n3));
    else printf("Media: %.2f\n", mediaP(n1, n2, n3));
    return 0;
}
