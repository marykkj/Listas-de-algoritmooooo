#include <stdio.h>
#include <math.h>

float calcVolume(float base, float alt) {
    return M_PI * pow(base, 2) * alt;
}

int main() {
    float r, a;
    scanf("%f %f", &r, &a);
    printf("Volume: %.2f\n", calcVolume(r, a));
    return 0;
}
