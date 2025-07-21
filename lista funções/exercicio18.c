#include <stdio.h>

int elevar(int b, int e) {
    int r = 1;
    while (e--)
        r *= b;
    return r;
}

int main() {
    int a, z;
    scanf("%d %d", &a, &z);
    printf("%d\n", elevar(a, z));
    return 0;
}
