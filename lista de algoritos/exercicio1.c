#include <stdio.h> 
//EXERCICIO 1 LISTA DE REVISAO
int main(){
    float alt; 
    printf("Digite a altura: \n");
    scanf("%f", &alt); 
    if(alt <= 1.50){
        printf("O individuo e: muito baixo\n"); 
    }else{
        if(alt >1.50 && alt <= 1.60){
        printf("O individuo e: baixo\n"); 
        }else{
            if(alt > 1.60 && alt <= 1.80){
                printf("O individuo e: mediano\n"); 
            }else{
                printf("O individuo e: alto\n"); 
            }
        }
    }          
    return 0; 
}
