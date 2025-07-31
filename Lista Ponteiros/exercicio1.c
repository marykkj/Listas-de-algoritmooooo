#include <stdio.h>
//exercicio 1 lista ponteiro 
int main(){
    int inteir = 1; 
    float real = 1.0; 
    char letra = 'A'; 

    int *p_inteir; 
    float *p_real; 
    char *p_letra; 

    p_inteir = &inteir; 
    p_real = &real; 
    p_letra = &letra; 

    printf("Antes da modificacao: \n"); 
    printf("Inteiro: %d\n", inteir); 
    printf("Real: %.2f\n", real); 
    printf("Letra: %c\n", letra); 
    printf("\n"); 
    *p_inteir = 2; 
    *p_real = 2.0; 
    *p_letra = 'M'; 

    printf("Depois da modificacao: \n"); 
    printf("Inteiro: %d\n", inteir); 
    printf("Real: %.2f\n", real); 
    printf("Letra: %c\n", letra); 

    return 0;
}