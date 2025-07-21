#include <stdio.h>

void tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c)
        printf("Equilátero\n");
    else if (a == b || b == c || a == c)
        printf("Isósceles\n");
    else
        printf("Escaleno\n");
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    tipo_triangulo(x, y, z);
    return 0;
}
