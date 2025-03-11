#include <stdio.h>

int mdc(int a, int b);

int main() {
    int a, b;

    // Entrada de dados
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // Chama a função mdc e exibe o resultado
    printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));

    return 0;
}

int mdc(int a, int b) {
    // Algoritmo de Euclides para calcular o MDC
    while (b) {
        a %= b;
        a ^= b ^= a ^= b;  // Troca sem variável temporária
    }
    return a;
}