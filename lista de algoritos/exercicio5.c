#include <stdio.h>
//EXERCICIO 5 LISTA DE REVISAO 
int main() {
    int n; 
    printf("Digite um numero inteiro: ");
    scanf("%d", &n); 
    for(int i=0; i<n; i++){
        printf("%d", 2 * i+1); 
    if(i < n - 1){
        printf(","); 
    } } 
    printf("\n"); 
    return 0;
}
