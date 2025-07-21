#include <stdio.h>

int soma_intervalo(int a, int b) {
    int soma = 0;
    for (int i = a + 1; i < b; i++)
        soma += i;
    return soma;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x < y)
        printf("%d\n", soma_intervalo(x, y));
    else
        printf("%d\n", soma_intervalo(y, x));
    return 0;
}
