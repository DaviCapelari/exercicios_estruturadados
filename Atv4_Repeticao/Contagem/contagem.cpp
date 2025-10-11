#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número inteiro positivo:\n";
    cin >> numero;

    while (numero >= 0) {
        cout << numero << endl;
        numero--;
    }
    return 0;
}