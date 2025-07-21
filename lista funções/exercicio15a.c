#include <stdio.h>

int triangulo_valido(int l1, int l2, int l3) {
    return (l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (triangulo_valido(a, b, c))
        printf("É um triângulo\n");
    else
        printf("Não é um triângulo\n");
    return 0;
}
