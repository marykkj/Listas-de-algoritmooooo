#include <stdio.h>

int dobro(int num) {
    return num * 2;
}
int main() {
    int valor;
    scanf("%d", &valor);
    printf("Dobro: %d\n", dobro(valor));
    return 0;
}
