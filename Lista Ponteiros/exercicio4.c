#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y);
    return 0;
}
