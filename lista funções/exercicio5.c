#include <stdio.h>
#include <math.h>

float volumeEsfera(float r) {
    return (4.0 / 3) * M_PI * pow(r, 3);
}

int main() {
    float raio;
    scanf("%f", &raio);
    printf("Volume: %.2f\n", volumeEsfera(raio));
    return 0;
}
