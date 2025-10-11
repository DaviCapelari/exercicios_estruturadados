#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        char c = palavra[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            contador++;
        }
    }

    printf("Total de vogais: %d\n", contador);
    return 0;
}