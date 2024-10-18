#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
  if (num <= 1) {
    return 1;
  }
  return num * fatorial(num - 1);
}

// Função para calcular o valor da série começando de 1
double serie(int n) {
  if (n == 1) {
    return 1.0;  // O primeiro termo da série é 1
  }
  return (1.0 / fatorial(n)) + serie(n - 1);
}

int main() {
  // Declaração da variável
  int n;
  // Solicita o número ao usuário
  scanf("%d", &n);
  // Chama a função da série e exibe o resultado
  double resultado = serie(n);
  printf("%.2f\n", resultado); // Exibe o resultado com duas casas decimais
  // Finalizando o código
  return 0;
}