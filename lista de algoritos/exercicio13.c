#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;
typedef struct {
    Ponto inferiorEsquerdo;
    Ponto superiorDireito;
} Retangulo;
int main() {
    Retangulo r;
    printf("Digite as coordenadas do ponto inferior esquerdo (x y): ");
    scanf("%f %f", &r.inferiorEsquerdo.x, &r.inferiorEsquerdo.y);

    printf("Digite as coordenadas do ponto superior direito (x y): ");
    scanf("%f %f", &r.superiorDireito.x, &r.superiorDireito.y);

    float largura = fabs(r.superiorDireito.x - r.inferiorEsquerdo.x);
    float altura = fabs(r.superiorDireito.y - r.inferiorEsquerdo.y);
    float area = largura * altura;

    printf("Area do retangulo: %.2f\n", area);
    return 0;
}
