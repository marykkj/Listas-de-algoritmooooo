#include <stdio.h>

int verificarSinal(int n) {
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}
int main() {
    int numero;
    scanf("%d", &numero);
    printf("%d\n", verificarSinal(numero));
    return 0;
}
