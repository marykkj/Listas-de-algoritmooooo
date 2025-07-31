#include <stdio.h>
//exercicio 2 lista ponteiro 
int main(){
    int a = 1; 
    int b = 2; 
    int *p_a = &a; 
    int *p_b = &b; 
    printf("Endereco de a: *p_a = %d\n", *p_a); 
    printf("Endereco de b: *p_b = %d\n", *p_b);
    if(*p_a > *p_b){
        printf("O endereco de a eh maior que o de b\n");
    }else{
        printf("O endereco de b eh maior que o de a\n");
    }
    return 0;
}