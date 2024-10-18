#include <stdio.h>

// Função recursiva para contar os dígitos de um número
int contaDigitos(int numero) {
    // Caso base: se o número for 0, não há mais dígitos
    if (numero == 0)
        return 0;
    // Chamada recursiva com o número dividido por 10
    return 1 + contaDigitos(numero / 10);
}

int main() {
    int numero;
    scanf("%d", &numero);
    if (numero == 0) {
    } else {
        printf("%d\n", contaDigitos(numero));
    }
    return 0;
}
