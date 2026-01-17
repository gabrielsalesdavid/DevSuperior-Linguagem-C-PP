#include <bits/stdc++.h>

using namespace std;

int main () {

    double salario01, salario02;
    string nome01, nome02;
    int idade;
    char sexo;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome01);
    cout << "Salario da primeira pessoa: ";
    cin >> salario01;

    cout << "Nome da seguna pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome02);
    cout << "Salario da segunda pessoa: ";
    cin >> salario02;

    cout << "Digite uma idade: ";
    cin >> idade;
    cout << "Digite um sexo(F/M): ";
    cin >> sexo;



    return 0;
}