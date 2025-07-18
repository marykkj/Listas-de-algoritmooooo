#include <stdio.h>
//EXERCICIO 7 LISTA DE REVISAO 
int main() {
    int vet[10]; 
    printf("Digite 10 numeros inteiros:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &vet[i]); 
    } 
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vet[i] > vet[j]) {
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }  } }
    printf("Os 3 menores números são:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", vet[i]);
    }
    return 0;
}
