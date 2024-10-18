#include <stdio.h>

// Função recursiva para calcular a divisão usando subtrações sucessivas
int divisao(int numerador, int denominador) {
    // Caso base: se o numerador for menor que o denominador, o quociente é 0
    if (numerador < denominador)
        return 0;
    // Chamada recursiva: subtrai o denominador do numerador e soma 1 ao quociente
    return 1 + divisao(numerador - denominador, denominador);
}

int main() {
    int numerador, denominador;
    scanf("%d", &numerador);
    scanf("%d", &denominador);
    if (denominador == 0) {
    } else {
        printf("%d\n", divisao(numerador, denominador));
    }
    return 0;
}
