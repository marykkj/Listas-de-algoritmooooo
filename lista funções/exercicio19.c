#include <stdio.h>

int calcular_fat(int x) {
    int r = 1;
    for (; x > 1; x--)
        r *= x;
    return r;
}

int main() {
    int v;
    scanf("%d", &v);
    printf("%d\n", calcular_fat(v));
    return 0;
}
