#include <stdio.h>

void desenha_linha(int n) {
    for (int i = 0; i < n; i++)
        printf("=");
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    desenha_linha(t);
    return 0;
}
