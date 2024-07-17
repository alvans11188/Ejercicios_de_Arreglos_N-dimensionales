#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	int matriz[10][10];
	int ubicacion[10][10];
	srand(time(0));
	int minas;
	cout<<"segun la matriz donde los 1 son las minas: "<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			matriz[i][j]= rand() % 2 ;
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"la cantidad de minas que hay alrededor, sin contar la propia celda: "<<endl;
	for(int m=0;m<10;m++){
		for(int n=0;n<10;n++){
			int cont=0;
			for(int a=-1;a<2;a++){
				for(int b=-1;b<2;b++){
					if(matriz[m+a][n+b]==1 and m+a!=-1 and n+b!=-1 and m+a!=10 and n+b!=10){
					    if(a==0 and b==0){
						    cont--;
					    }
					    cont++;
					}
				}
			}
			ubicacion[m][n]=cont;
			cout<<ubicacion[m][n]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
