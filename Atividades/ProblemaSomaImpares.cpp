#include <iostream>

using namespace std;

int main () {

    int a, b, trocaVariaveis, somasDasVariaveis;

    cout << "Digite dois numeros: " << endl;
    cin >> a >> b;

    if (a > b) {
        trocaVariaveis = a;
        a = b;
        b = trocaVariaveis;
    }

    somasDasVariaveis = 0;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0) {
            somasDasVariaveis = somasDasVariaveis + i;
        }
    }

    cout << "Soma dos impares = " << somasDasVariaveis << endl;

    return 0;
}