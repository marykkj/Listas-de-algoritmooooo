#include <stdio.h>

struct Telefone {
    int ddd;
    char numero[15];
};

int main() {
    struct Telefone telefones[2];
    for (int i = 0; i < 2; i++) {
        printf("Digite o DDD: ");
        scanf("%d", &telefones[i].ddd);
        printf("Digite o telefone: ");
        scanf("%s", telefones[i].numero);
    }
    printf("\nTelefones cadastrados:\n");
    for (int i = 0; i < 2; i++) {
        printf("(%d) %s\n", telefones[i].ddd, telefones[i].numero);
    }
    return 0;
}
