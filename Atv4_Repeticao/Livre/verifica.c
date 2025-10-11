#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        printf("Digite o primeiro número (0 para sair): ");
        scanf("%d", &a);
        printf("Digite o segundo número (0 para sair): ");
        scanf("%d", &b);

        if (a == 0 || b == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        if (a > b)
            printf("O primeiro número é maior.\n");
        else if (a < b)
            printf("O segundo número é maior.\n");
        else
            printf("Os números são iguais.\n");
            break;
    }

    return 0;
}