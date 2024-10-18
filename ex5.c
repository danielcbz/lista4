#include <stdio.h>

// Função recursiva para calcular o valor da série
double serie(int n) {
    // Caso base: se n for 1, a soma é 1
    if (n == 1)
        return 1.0;
    // Chamada recursiva: 1/n + série até n-1
    return 1.0 / n + serie(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    // Verificando se o valor de n é maior que 0
    if (n > 0) {
        // Chamando a função recursiva e exibindo o resultado
        printf("%.2lf\n", serie(n));}
    return 0;
}
