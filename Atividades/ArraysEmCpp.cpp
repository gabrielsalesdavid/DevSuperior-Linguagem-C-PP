#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int n, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "Numeros Digitados: " << endl;
    cout << fixed << setprecision(1);
    for (i = 0; i < n; i++) {
        cout << vet[i] << endl;
    }

    return 0;
}