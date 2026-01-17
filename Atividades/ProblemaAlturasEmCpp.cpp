#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int n, contagemDasVariaveis;
    double somasDaVariaveis, mediaDasVariaveis, porcento;

    cout << "Quantas pessoas serao digitadas? " << endl;
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Alturas: ";
        cin >> alturas[i];
    }

    somasDaVariaveis = 0;
    for (int i = 0; i < n; i++) {
        somasDaVariaveis = somasDaVariaveis + alturas[i];
    }

    mediaDasVariaveis = somasDaVariaveis / n;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << mediaDasVariaveis << endl;

    contagemDasVariaveis = 0;
    for (int i = 0; i < n; i ++) {
        if (idades[i] < 16) {
            contagemDasVariaveis++;
        }
    }

    porcento = contagemDasVariaveis * 100.0 / n;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcento << "%" << endl;

    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
          cout << nomes[i] << endl;
        }
    }

    return 0;
}