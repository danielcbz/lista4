#include <stdio.h>

// Função recursiva para calcular o resto da divisão usando subtrações sucessivas
int resto(int numerador, int denominador) {
    // Caso base: se o numerador for menor que o denominador, o resto é o numerador
    if (numerador < denominador)
        return numerador;
    // Chamada recursiva: subtrai o denominador do numerador
    return resto(numerador - denominador, denominador);
}

int main() {
    int numerador, denominador;
    scanf("%d", &numerador);
    scanf("%d", &denominador);

    // Verificando se o denominador é diferente de zero
    if (denominador == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
    } else {
        // Chamando a função para calcular o resto da divisão e exibindo o resultado
        printf("%d\n", resto(numerador, denominador));
    }

    return 0;
}
