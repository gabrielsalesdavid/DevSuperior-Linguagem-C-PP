#include <iostream>

using namespace std;

int main () {

    string nome01, nome02;
    int idade01, idade02;
    double media;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    getline(cin, nome01);
    cout << "Idade: ";
    cin >> idade01;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome02);
    cout << "Idade: ";
    cin >> idade02;

    media = (idade01 + idade02) / 2.0;
    cout << "A idade media de " << nome01 << " e " << nome02 << " eh de " << media << " anos.";

    return 0;
}