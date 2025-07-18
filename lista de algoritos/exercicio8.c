#include <stdio.h>

int main() {
    int dadoDigitado;
    int caixaValores[5];
    int contador;
    int topo = 0;
    int fundo = 0;
    int somaTotal = 0;
    float estatisticaMedia;

    printf("<< Coletando 5 elementos >>\n");

    for (contador = 0; contador < 5; contador++) {
        printf("Informe o item %d: ", contador + 1);
        scanf("%d", &dadoDigitado);
        caixaValores[contador] = dadoDigitado;
        somaTotal += dadoDigitado;

        if (contador == 0) {
            topo = dadoDigitado;
            fundo = dadoDigitado;
        } else {
            if (dadoDigitado > topo)
                topo = dadoDigitado;
            if (dadoDigitado < fundo)
                fundo = dadoDigitado;
        }
    }

    printf("\nElementos informados: ");
    for (contador = 0; contador < 5; contador++) {
        printf("%d ", caixaValores[contador]);
    }

    estatisticaMedia = (float)somaTotal / 5;

    printf("\nValor máximo: %d", topo);
    printf("\nValor mínimo: %d", fundo);
    printf("\nValor médio: %.1f\n", estatisticaMedia);

    return 0;
}
