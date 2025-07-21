#include <stdio.h>
#include <math.h>

int ehPerfeito(int numero) {
    int r = sqrt(numero);
    return numero == r * r;
}

int main() {
    int entrada;
    scanf("%d", &entrada);
    printf("%d\n", ehPerfeito(entrada));
    return 0;
}
