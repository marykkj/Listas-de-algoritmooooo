#include <stdio.h>

int soma_algarismos(int num) {
    if (num <= 0) {
        printf("Número inválido\n");
        return -1;
    }
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main() {
    int valor;
    scanf("%d", &valor);
    int resultado = soma_algarismos(valor);
    if (resultado != -1)
        printf("Soma dos algarismos: %d\n", resultado);
    return 0;
}
