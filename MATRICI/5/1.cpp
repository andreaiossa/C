#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int NR = 10;
const int NC = 10;


int valore_assoluto(int x);
int ** genera_matrice(int NR, int NC);
void stampa_matrice(int ** matrice, int NR, int NC);
int ** modifica_matrice(int ** matrice, int NR, int NC);

int main(){


	int ** matrice = genera_matrice(NR, NC);
	stampa_matrice(matrice, NR, NC);

	int ** new_matrice = modifica_matrice(matrice, NR, NC);
	cout << endl;
	cout << endl;
	stampa_matrice(new_matrice, NR, NC);

	return 0;
}


int ** genera_matrice(int NR, int NC){
	int ** matrice = new int* [NR];

	for(int i=0; i<NC; i++){
		matrice[i] = new int[NC];
	}

	for(int i=0; i<NR; i++){
		for(int j=0; j<NC; j++){

			int numero = rand() % 100;
			if(numero % 2 == 0){
				numero = -1 * numero;
				
			}
			matrice[i][j] = numero;
		}
	}
	return matrice;
}


void stampa_matrice(int ** matrice, int NR, int NC){
	for(int i=0; i<NR; i++){
		for(int j=0; j<NC; j++){
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
}

int valore_assoluto(int x){
	if(x >= 0){
		return x;
	}else{
		return -x;
	}
}

int ** modifica_matrice(int ** matrice, int NR, int NC){

	int ** new_matrice = new int* [NR];

	for(int i=0; i<NR; i++){
		new_matrice[i] = new int[NC];
	}

	for(int i=0; i<NR; i++){
		for(int j=0; j<NC; j++){
			new_matrice[i][j] = valore_assoluto(matrice[i][j]);
		}
	}

	return new_matrice;
}















































