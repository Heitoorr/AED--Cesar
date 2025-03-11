#include <stdio.h>

int mdc(int a, int b);

int main() {

    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));

    return 0;
}

int mdc(int a, int b) {
    // Se b for 0, retorna a, pois o MDC de qualquer número e 0 é o próprio número
    return (b == 0) ? a : mdc(b, a % b);
}
