/*
ejercicio9
Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4.
1 2 3 4
4 1 2 3
3 4 1 2
2 3 4 1
*/
#include <iostream>
using namespace std;

void generarCuadradoLatino(int N) {
    int matriz[N][N];

    // Generar el cuadrado latino
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = (i + j) % N + 1;
        }
    }

    // Imprimir el cuadrado latino
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Ingrese el orden del cuadrado latino: ";
    cin >> N;

    generarCuadradoLatino(N);

    return 0;
}


