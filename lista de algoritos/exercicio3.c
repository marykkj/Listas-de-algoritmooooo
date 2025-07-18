#include <stdio.h>
//EXERCICIO 3 LISTA DE REVISAO
int main() {
    char estado_civil;
    printf("Digite a primeira letra do seu estado civil:\n");
    printf("c = casado\ns = solteiro\nv = viuvo\nd = divorciado\n");
    printf("Sua opcao: ");
    scanf(" %c", &estado_civil); 

   switch(estado_civil){
       case 'c': 
       case 'C': 
       printf("Indicacao: Caramel Sweet & Salt\n"); 
       break; 
       case 's': 
       case 'S': 
       printf("Indicacao: London Pub\n"); 
       break; 
       case 'v': 
       case 'V': 
       printf("Indicacao: XI Baile da Melhor Idade\n"); 
       break; 
       case 'd': 
       case 'D': 
       printf("Indicacao: Academia Smart Fit\n"); 
       default:
       printf("Opcao invalida\n"); 
   }
    return 0;
}
