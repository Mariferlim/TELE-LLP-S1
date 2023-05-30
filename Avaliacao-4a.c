#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    float resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido.\n");
    } else {
        resultado = log10(numero);
        printf("O logaritmo de %d é: %.2f\n", numero, resultado);
    }

    return 0;
}