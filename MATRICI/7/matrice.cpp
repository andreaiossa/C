#include <iostream>

using namespace std;

const int NR = 10;
const int NC = 10;

int** genera_matrice(int nr, int nc);
void stampa_matrice(int** matrice, int nr, int nc);
int** modifica_matrice(int** matrice, int NR, int NC);

int main(){

	int** matrice_originale = genera_matrice(NR, NC);

	cout << "matrice originale: " << endl;
	cout << endl;
	stampa_matrice(matrice_originale, NR, NC);

	cout << endl;

	int** matrice_modificata = modifica_matrice(matrice_originale, NR, NC);

	cout << "amtrice modificata: " << endl;
	cout << endl;
	stampa_matrice(matrice_modificata, NR, NC);
	cout << endl;


	return 0;
}

int** modifica_matrice(int** matrice, int NR, int NC){
	int ** new_matrice = new int* [NR];

	for(int i = 0; i < NR; i++){
		new_matrice[i] = new int[NC];
	}

	for(int i=0; i<NR; i++){
		for(int j=0; j<NC;j++){
			new_matrice[i][j] = matrice[i][j];
			if(new_matrice[i][j] % 2 != 0){
				new_matrice[i][j] = new_matrice[i][j] + 1; 
			}
		}
	}

	return new_matrice;
}

int** genera_matrice(int nr, int nc){
	int** matrice = new int* [nr];

	for(int i=0; i< nr; i++){
		matrice[i] = new int[nc];
	}

	for(int i=0; i<nr; i++){
		for(int j=0; j<nr; j++){
			matrice[i][j] = i + j;
		}
	}

	return matrice;
}

void stampa_matrice(int** matrice, int nr, int nc){
	for(int i=0; i<nr; i++){
		for(int j=0; j<nc; j++){
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
}