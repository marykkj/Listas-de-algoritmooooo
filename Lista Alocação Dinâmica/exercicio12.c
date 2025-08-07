#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int n, maior_qtde = 0, pos_maior_preco = 0, pos_maior_qtde = 0;
    printf("Digite o número de produtos: ");
    scanf("%d", &n);
    Produto *produtos = malloc(n * sizeof(Produto));
    for(int i = 0; i < n; i++) {
        printf("ID: ");
        scanf("%d", &produtos[i].id);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        if(produtos[i].preco > produtos[pos_maior_preco].preco) {
            pos_maior_preco = i;
        }
        if(produtos[i].quantidade > produtos[pos_maior_qtde].quantidade) {
            pos_maior_qtde = i;
        }
    }
    printf("Produto com maior preco: %s\n", produtos[pos_maior_preco].nome);
    printf("Produto com maior quantidade: %s\n", produtos[pos_maior_qtde].nome);
    free(produtos);
    return 0;
}
