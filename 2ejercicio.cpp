#include <iostream>
using namespace std;

int main() {
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 2, 6},
        {7, 2, 9}
    };

    int numero;
    bool encontrado = false;
    // búsqueda de un valor
    cout << "Ingresa el valor que deseas buscar: ";
    cin >> numero;
    cout << "El valor " << numero << " se encuentra en: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz1[i][j] == numero) {
                cout << "Fila " << i << ", Columna " << j << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "El valor " << numero << " no se encuentra en la matriz." << endl;
    }

    return 0;
}
