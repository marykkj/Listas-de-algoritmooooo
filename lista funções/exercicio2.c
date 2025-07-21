#include <stdio.h>

void mostrarData(int d, int m, int a) {
    printf("Data: %02d/%02d/%d\n", d, m, a);
}
int main() {
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    mostrarData(dia, mes, ano);
    return 0;
}
