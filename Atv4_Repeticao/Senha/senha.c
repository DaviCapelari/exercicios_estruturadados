#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    char senhaCorreta[] = "1234";

    do {
        printf("Digite a senha: ");
        scanf("%s", senha);
        if (strcmp(senha, senhaCorreta) != 0)
            printf("Senha incorreta!\n");
    } while (strcmp(senha, senhaCorreta) != 0);

    printf("Senha correta!\n");
    return 0;
}