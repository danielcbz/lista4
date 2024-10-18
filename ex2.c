#include <stdio.h>

// Função recursiva para calcular a soma dos dígitos de um número
int somaDigitos(int numero) {
    // Caso base: se o número for 0, a soma é 0
    if (numero == 0)
        return 0;
    // Chamada recursiva: soma o último dígito e chama a função com o número sem o último dígito
    return (numero % 10) + somaDigitos(numero / 10);
}

int main() {
    int numero;
    scanf("%d", &numero);
    printf("%d\n", somaDigitos(numero));
    return 0;
}
