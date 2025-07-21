#include <stdio.h>
#include <math.h>

float hipotenusa(float cat1, float cat2) {
    return sqrt(cat1 * cat1 + cat2 * cat2);
}
int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Hipotenusa: %.2f\n", hipotenusa(a, b));
    return 0;
}
