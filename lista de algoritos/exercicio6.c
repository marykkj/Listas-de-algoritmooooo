#include <stdio.h>
//EXERCICIO 6 LISTA DE REVISAO 
int main() {
    int n, i, j;
    printf("Digite n, i e j: ");
    scanf("%d %d %d", &n, &i, &j);
    int cont = 0;
    int numero = 0;
    while (cont < n) {
        if (numero % i == 0 || numero % j == 0) {
            printf("%d\n", numero);
            cont++;
        }
        numero++;
    } 
    return 0;
}
