#include <stdio.h>

void consumo(float km, float litros) {
    float consumo = km / litros;
    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");
}

int main() {
    float distancia, combustivel;
    scanf("%f %f", &distancia, &combustivel);
    consumo(distancia, combustivel);
    return 0;
}
