#include <stdio.h>

void segundosParaHora(int s) {
    int horas = s / 3600;
    int minutos = (s % 3600) / 60;
    int segundos = s % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

int main() {
    int totalSegundos;
    scanf("%d", &totalSegundos);
    segundosParaHora(totalSegundos);
    return 0;
}
