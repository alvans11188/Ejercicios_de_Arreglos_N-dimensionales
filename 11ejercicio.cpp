/*
Ejercicio 11:
Simulación de Propagación de Fuego: Cree un programa que simule la propagación de un incendio en un bosque 
representado por una matriz de 10x10, donde los árboles pueden estar en diferentes estados: vivos (0), quemándose (1), 
quemados (2). El programa debe actualizar el estado del bosque en función de las siguientes reglas y mostrar el bosque en 
su estado inicial y después de la propagación del fuego:
•Un árbol vivo (0) se convierte en quemándose (1) si al menos uno de sus vecinos está quemándose.
•Un árbol quemándose (1) se convierte en quemado (2) en la siguiente iteración.
•Un árbol quemado (2) permanece quemado.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int VIVO = 0;
const int QUEMANDOSE = 1;
const int QUEMADO = 2;

void inicializarBosque(int bosque[10][10]) {
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            bosque[i][j] = VIVO;
        }
    }
    bosque[rand() % 10][rand() % 10] = QUEMANDOSE;
}

void mostrarBosque(int bosque[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (bosque[i][j] == VIVO) {
                cout << "0 ";
            } else if (bosque[i][j] == QUEMANDOSE) {
                cout << "1 ";
            } else {
                cout << "2 ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void propagarFuego(int bosque[10][10], int nuevoBosque[10][10]) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (bosque[i][j] == VIVO) {
                bool vecinoQuemandose = false;
                for (int k = 0; k < 8; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10 && bosque[ni][nj] == QUEMANDOSE) {
                        vecinoQuemandose = true;
                        break;
                    }
                }
                if (vecinoQuemandose) {
                    nuevoBosque[i][j] = QUEMANDOSE;
                } else {
                    nuevoBosque[i][j] = VIVO;
                }
            } else if (bosque[i][j] == QUEMANDOSE) {
                nuevoBosque[i][j] = QUEMADO;
            } else {
                nuevoBosque[i][j] = QUEMADO;
            }
        }
    }
}

int main() {
    int bosque[10][10];
    int nuevoBosque[10][10];

    inicializarBosque(bosque);

    cout << "Estado inicial del bosque:" << endl;
    mostrarBosque(bosque);

    propagarFuego(bosque, nuevoBosque);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            bosque[i][j] = nuevoBosque[i][j];
        }
    }
    cout << "Estado del bosque despues de la propagacion del fuego:" << endl;
    mostrarBosque(bosque);
    return 0;
}
