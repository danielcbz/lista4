#include <stdio.h>

// Procedimento para converter segundos em horas, minutos e segundos
void converteHora(int totalSegundos, int *hora, int *min, int *seg) {
    // Calcula as horas
    *hora = totalSegundos / 3600;
    // Calcula os minutos restantes
    *min = (totalSegundos % 3600) / 60;
    // Calcula os segundos restantes
    *seg = totalSegundos % 60;
}

int main() {
    int totalSegundos;
    int hora, min, seg;
    scanf("%d", &totalSegundos);
    converteHora(totalSegundos, &hora, &min, &seg);
    printf("%02d:%02d:%02d\n", hora, min, seg);
    return 0;
}