#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes, pos, val, op;
    printf("Digite o tamanho da memoria (em bytes): ");
    scanf("%d", &bytes);
    int tam = bytes / sizeof(int);
    int *mem = calloc(tam, sizeof(int));
    do {
        printf("1 - Inserir | 2 - Consultar | 0 - Sair: ");
        scanf("%d", &op);
        if(op == 1) {
            printf("Posição e valor: ");
            scanf("%d %d", &pos, &val);
            if(pos >= 0 && pos < tam) mem[pos] = val;
        } else if(op == 2) {
            printf("Posição: ");
            scanf("%d", &pos);
            if(pos >= 0 && pos < tam) printf("%d\n", mem[pos]);
        }
    } while(op != 0);
    free(mem);
    return 0;
}
