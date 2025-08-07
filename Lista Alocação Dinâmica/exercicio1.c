#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *)malloc(5 * sizeof(int));
    printf("Digite 5 numeros inteiros:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }
    printf("Os numeros digitados foram:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    free(v);
    return 0;
}