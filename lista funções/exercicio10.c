#include <stdio.h>

int maior(int x, int y) {
    return x > y ? x : y;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Maior: %d\n", maior(a, b));
    return 0;
}
