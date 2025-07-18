#include <stdio.h>
//EXERCICIO 2 LISTA DE REVISAO
int main() {
    char p1[20], p2[20], p3[20];
    printf("Digite o tipo (vertebrado ou invertebrado): ");
    scanf("%s", p1);
    printf("Digite a classe (ave, mamifero, inseto ou anelideo): ");
    scanf("%s", p2);
    printf("Digite a alimentacao (carnivoro, onivoro, herbivoro ou hematofago): ");
    scanf("%s", p3);
    //vertebrado
    if (p1[0] == 'v') {
        if (p2[0] == 'a') {// ave
            if (p3[0] == 'c') {
                printf("Animal: aguia\n");
            } else {
                printf("Animal: pomba\n");
            }
        } else {// mamifero
            if (p3[0] == 'o') {
                printf("Animal: homem\n");
            } else {
                printf("Animal: vaca\n");
            }
        } }
    //ivertebrado
    else {
        if (p2[0] == 'i') {// inseto
            if (p3[0] == 'h') {
                printf("Animal: pulga\n");
            } else {
                printf("Animal: lagarta\n");
            }
        } else {// anelideo
            if (p3[0] == 'h') {
                printf("Animal: sanguessuga\n");
            } else {
                printf("Animal: minhoca\n");
            }
        } } 
    return 0;
}
