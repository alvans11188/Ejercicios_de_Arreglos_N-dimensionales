#include <iostream>
using namespace std;

int main() {
    int matriz1[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matriz2[3][3] ={
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int producto[3][3] = {0}; // Inicializar matriz producto con 0

    // Multiplicación de matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Matriz 2:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Resultado:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
	
    return 0;
}

