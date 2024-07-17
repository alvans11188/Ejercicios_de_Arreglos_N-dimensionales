/*Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.
Ejemplo de Entrada
Matriz:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Filas a intercambiar:
0
2
*/
#include <iostream>
using namespace std;
void intercambiarFilas(int matriz[4][4], int fila1, int fila2) {
    for (int j = 0; j < 4; j++) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }
}

void mostrarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int fila1, fila2;

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz1);

    cout << "Ingrese la primera fila a intercambiar (0-3): ";
    cin >> fila1;
    cout << "Ingrese la segunda fila a intercambiar (0-3): ";
    cin >> fila2;

    if (fila1 >= 0 && fila1 < 4 && fila2 >= 0 && fila2 < 4) {
        intercambiarFilas(matriz1, fila1, fila2);
        cout << "Matriz después de intercambiar las filas " << fila1 << " y " << fila2 << ":" << endl;
        mostrarMatriz(matriz1);
    } else {
        cout << "Error: las filas deben estar entre 0 y 3." << endl;
    }

	return 0;
}


