#include <iostream>
#include <cstring>

using namespace std;

const int NUMERO_RIGHE = 6;
const int NUMERO_COLONNE = 5;

int main (){

	int matrice[][NUMERO_COLONNE] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
	int n_riga, n_colonna, n_righe, n_colonne;

	// Posizione del primo elemento della selezione

	cout << "Posizione primo elemento della selezione; riga e colonna: ";
	cin >> n_riga >> n_colonna;

	// Dimensione della selezione

	cout << "Dimensione della selezione; righe e colonne: ";
	cin >> n_righe >> n_colonne;

	// Selezione della sotto-matrice
	
	int** selezione = seleziona(matrice, n_riga, n_colonna, n_righe, n_colonne);
	cout << "Matrice di output: " << endl;
	stampa_matrice(selezione, n_righe, n_colonne);

	// Deallocazione della matrice
	
	dealloca_matrice(selezione, n_righe);
	
	return 0;
}



int** alloca_matrice(int righe, int colonne){
	int** matrice = new int* [righe];

	for(int i = 0; i < righe; i++){
		matrice[i] = new int[colonne];
	}

	return matrice;
}


void dealloca_matrice(int ** matrice, int righe){
	for(int i =0; i< righe; i++){
		delete matrice[i];
	}
}

int** seleziona(int matrice[][NUMERO_COLONNE], int y, int x, int altezza, int lunghezza){
	int ** new_matrice = alloca_matrice(altezza, lunghezza);

	for(int i = y; i<altezza; i++){
		for(int j = x; x<lunghezza; j++){
			new_matrice[y][x] = matrice[y][x];
		}
	}
}



















