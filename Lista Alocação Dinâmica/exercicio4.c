#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Digite o tamanho da string: ");
    scanf("%d", &n);
    char *str = malloc((n + 1) * sizeof(char));
    printf("Digite a string: ");
    scanf(" %[^\n]", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
            printf("%c", str[i]);
        }
    }
    free(str);
    return 0;
}
