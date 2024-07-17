/*
8.
Espiral Matriz.
Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino
espiral.
*/
#include <iostream>
using namespace std;

void espiralenOrden (int matriz[5][5]){
	int top = 0, bottom = 5 - 1; // Límites superior e inferior
    int left = 0, right = 5 - 1; // Límites izquierdo y derecho

    while (top <= bottom && left <= right) {
        // Imprimir la fila superior de la matriz
        for (int i = left; i <= right; ++i) {
            cout << matriz[top][i] << " ";
        }
        top++; // Mover el límite superior hacia abajo

        // Imprimir la columna derecha de la matriz
        for (int i = top; i <= bottom; ++i) {
            cout << matriz[i][right] << " ";
        }
        right--; // Mover el límite derecho hacia la izquierda

        // Imprimir la fila inferior de la matriz (si todavía hay filas por imprimir)
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matriz[bottom][i] << " ";
            }
            bottom--; // Mover el límite inferior hacia arriba
        }

        // Imprimir la columna izquierda de la matriz (si todavía hay columnas por imprimir)
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matriz[i][left] << " ";
            }
            left++; // Mover el límite izquierdo hacia la derecha
        }
    }
}

int main(){
	int matriz[5][5]={
		{1,  2,  3,  4,  5},
		{6,  7,  8,  9,  10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	cout << "Recorrido en espiral de la matriz:" << endl;
    espiralenOrden(matriz);
	return 0;
}
