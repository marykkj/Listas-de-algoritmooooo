#include <stdio.h>

int main() {
    int bloco[5][5], linhaSoma[5] = {0}, colunaSoma[5] = {0};
    int x, y;

    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            scanf("%d", &bloco[x][y]);
        }
    }
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            linhaSoma[x] += bloco[x][y];
            colunaSoma[y] += bloco[x][y];
        }
    }
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%3d", bloco[x][y]);
        }
        printf("\n");
    }

    for (x = 0; x < 5; x++) {
        printf("Linha %d: %d\n", x + 1, linhaSoma[x]);
    }

    for (x = 0; x < 5; x++) {
        printf("Coluna %d: %d\n", x + 1, colunaSoma[x]);
    }

    return 0;
}
