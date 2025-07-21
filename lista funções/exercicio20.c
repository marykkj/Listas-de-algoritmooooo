#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int limite, cont = 0;
    scanf("%d", &limite);
    for (int i = 2; i < limite; i++)
        if (eh_primo(i)) cont++;
    printf("%d\n", cont);
    return 0;
}
