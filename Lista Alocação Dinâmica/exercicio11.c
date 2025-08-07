#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[30];
    int ano;
} Aluno;

int main() {
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    Aluno *alunos = malloc(n * sizeof(Aluno));
    for(int i = 0; i < n; i++) {
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano nascimento: ");
        scanf("%d", &alunos[i].ano);
    }
    for(int i = 0; i < n; i++) {
        printf("%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano);
    }
    free(alunos);
    return 0;
}
