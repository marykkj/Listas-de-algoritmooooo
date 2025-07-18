#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int i, j;
    int jaMostrou;
    printf("Digite o texto: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (!isalpha(frase[i])) continue;
        jaMostrou = 0;

        for (j = 0; j < i; j++) {
            if (tolower(frase[i]) == tolower(frase[j])) {
                jaMostrou = 1;
                break;
            }
        }
        if (jaMostrou) continue;

        int ocorrencias = 0;
        for (j = 0; frase[j] != '\0'; j++) {
            if (tolower(frase[i]) == tolower(frase[j])) {
                ocorrencias++;
            }
        }
        if (ocorrencias > 1) {
            printf("%c aparece %d vezes\n", tolower(frase[i]), ocorrencias);
        }
    }

    return 0;
}
