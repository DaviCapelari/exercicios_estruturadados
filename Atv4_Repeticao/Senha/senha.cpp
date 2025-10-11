#include <iostream>
#include <string>
using namespace std;

int main() {
    string senhaCorreta = "1234", senha;

    do {
        cout << "Digite a senha: ";
        cin >> senha;
        if (senha != senhaCorreta)
            cout << "Senha incorreta!" << endl;
    } while (senha != senhaCorreta);

    cout << "Senha correta!" << endl;
    return 0;
}