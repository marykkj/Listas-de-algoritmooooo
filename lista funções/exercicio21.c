#include <stdio.h>

void imprimir_linhas(int l) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j <= i; j++)
            printf("!");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    imprimir_linhas(n);
    return 0;
}
