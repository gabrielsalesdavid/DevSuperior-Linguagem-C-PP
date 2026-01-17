#include <iostream>

using namespace std;

int main() {

    int n, contagemDeVariavel;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal principal:" << endl;
    for (int i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }

    cout << endl;

    contagemDeVariavel = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                contagemDeVariavel = contagemDeVariavel + 1;
            }
        }
    }

    cout << "Quantidade de negativos = " << contagemDeVariavel << endl;

    return 0;
}