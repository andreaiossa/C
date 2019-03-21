#include <iostream>

using namespace std;

const int NUMERO_RIGHE = 6;
const int NUMERO_COLONNE = 5;

int** alloca_matrice(int righe, int colonne);
void stampa_matrice(int** matrice, int righe, int colonne);
void dealloca_matrice(int** matrice, int righe, int colonne);
int** selezione(int matrice[][NUMERO_COLONNE], int x, int y, int righe, int colonne);

int main(){

	int matrice[][NUMERO_COLONNE] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
	int** new_matrice = selezione(matrice, 2, 1, 2, 3);
	stampa_matrice(new_matrice, 2, 3);

	return 0;
}

int** alloca_matrice(int righe, int colonne){
	int** matrice = new int* [righe];

	for(int i=0; i< righe; i++){
		matrice[i] = new int[colonne];
	}

	return matrice;
}

void dealloca_matrice(int** matrice, int righe, int colonne){
	for(int i=0; i< righe; i++){
		
		delete matrice[i];
		
	}
}

int** selezione(int matrice[][NUMERO_COLONNE], int x, int y, int righe, int colonne){

	int** new_matrice = alloca_matrice(righe, colonne);

	for(int i=0; i<righe; i++){
		for(int j=0; j<colonne; j++){
			new_matrice[i][j] = matrice[i + x][j + y];
		}
	}
	return new_matrice;
}

void stampa_matrice(int** matrice, int righe, int colonne){
	for(int i=0; i<righe; i++){
		for(int j=0; j<colonne; j++){
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
}