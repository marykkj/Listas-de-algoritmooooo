#include <stdio.h>

float calcular(float x, float y, char op) {
    switch (op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return y != 0 ? x / y : 0;
        default: return 0;
    }
}

int main() {
    float a, b;
    char s;
    scanf("%f %f %c", &a, &b, &s);
    float r = calcular(a, b, s);
    printf("Resultado: %.2f\n", r);
    return 0;
}
