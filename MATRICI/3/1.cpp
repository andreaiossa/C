#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

double ** leggimatrice(fstream& inP, int numero_righe, int numero_colonne);
void stampa_matrice(double ** matrice, int righe, int colonne);

int main(int argc, char * argcv[]){

	fstream inP;

	inP.open(argcv[1], ios::in);

	int numero_righe, numero_colonne;

	inP >> numero_righe;
	inP >> numero_colonne;

	double ** new_matrice = leggimatrice(inP, numero_righe, numero_colonne);
	stampa_matrice(new_matrice, numero_righe, numero_colonne);

	return 0;
}


double ** leggimatrice(fstream& inP, int numero_righe, int numero_colonne){

	double** matrice = new double* [numero_righe];
	double numero;

	for(int i = 0; i< numero_righe; i++){
		matrice[i] = new double[numero_colonne];
	}

	cout << "CHECK" << endl;

	for(int i = 0; i< numero_righe; i++){
		for(int j =0; j < numero_colonne; j++){
			inP >> numero;
			matrice[i][j] = numero;
		}
	}

	return matrice;
}

void stampa_matrice(double ** matrice, int righe, int colonne){
	for(int i = 0; i< righe; i++){
		for(int j=0; j<colonne; j++){
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
}