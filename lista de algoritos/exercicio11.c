#include <stdio.h>
#include <string.h>

int main() {
    char entradaTexto[100];
    int contador;
    printf("Digite um texto: ");
    fgets(entradaTexto, sizeof(entradaTexto), stdin);

    if (entradaTexto[strlen(entradaTexto) - 1] == '\n') {
        entradaTexto[strlen(entradaTexto) - 1] = '\0';
    }
    for (contador = strlen(entradaTexto) - 1; contador >= 0; contador--) {
        printf("%c", entradaTexto[contador]);
    }
    printf("\n");
    return 0;
}
