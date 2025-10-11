#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &numero);

    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }
    return 0;
}