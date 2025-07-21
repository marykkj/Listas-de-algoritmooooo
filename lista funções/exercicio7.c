#include <stdio.h>

float converter(float c) {
    return (c * 9 / 5) + 32;
}
int main() {
    float temp;
    scanf("%f", &temp);
    printf("F: %.2f\n", converter(temp));
    return 0;
}
