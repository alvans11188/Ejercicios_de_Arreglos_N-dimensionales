/*
Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada.
Matriz:
1 2 3 4 5
6 7 8 9 1
2 3 4 5 6
7 8 9 1 2
3 4 5 6 7
Ejemplo de Salida
Matriz reflejada horizontalmente:
5 4 3 2 1
1 9 8 7 6
6 5 4 3 2
2 1 9 8 7
7 6 5 4 3
*/
#include <iostream>
using namespace std;

void reflejarHorizontalmente(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) { // Solo necesitamos ir hasta la mitad de la fila
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][4 - j];
            matriz[i][4 - j] = temp;
        }
    }
}

void mostrarMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[5][5] = {
      	{1, 2, 3, 4,5},
        {1, 9, 8, 7, 6},
        {2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2},
        {3, 4, 5, 6, 7}
    };

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz1);

    reflejarHorizontalmente(matriz1);

    cout << "Matriz reflejada horizontalmente:" << endl;
    mostrarMatriz(matriz1);

    return 0;
}


