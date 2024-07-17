/*Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado.*/
#include <iostream>
using namespace std;
int main () {
	int matriz1[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13, 14, 15, 16}
    
	}
    ;
	
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    for (int i = 0; i < 4; i++) {
        sumaDiagonalPrincipal += matriz1[i][i];
        sumaDiagonalSecundaria += matriz1[i][3 - i];
    }

    cout << "La suma de la diagonal principal es: " << sumaDiagonalPrincipal << endl;
    cout << "La suma de la diagonal secundaria es: " << sumaDiagonalSecundaria << endl;

	return 0;
}

