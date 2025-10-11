#include <iostream>
using namespace std;

int main() {
    int a, b;

    while (true) {
        cout << "Digite o primeiro número (0 para sair): ";
        cin >> a;
        cout << "Digite o segundo número (0 para sair): ";
        cin >> b;

        if (a == 0 || b == 0) {
            cout << "Programa encerrado." << endl;
            break;
        }

        if (a > b)
            cout << "O primeiro número é maior." << endl;
        else if (a < b)
            cout << "O segundo número é maior." << endl;
        else
            cout << "Os números são iguais." << endl;
            break;
    }

    return 0;
}