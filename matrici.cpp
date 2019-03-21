#include <iostream>
#include <fstream>

using namespace std;

const int righe = 4;
const int colonne = 5;

float** genera_matrice(int X, int Y){
	float** matrice = new float* [X];

	for(int k=0; k<X; k++){
		matrice[k] = new float[Y];
	}

	for(int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			matrice[i][j] = r;
		}
	}

	return matrice;
}

float** genera_matrice_input(fstream &input, int X, int Y){
	float** matrice = new float* [X];

	for(int k=0; k<X; k++){
		matrice[k] = new float[Y];
	}

	float r;
	for(int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			input >> r;
			matrice[i][j] = r;
		}
	}

	return matrice;
}

void stampa_matrice(float** matrice, int X, int Y){
	for(int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			cout << matrice[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

float** modifica_matrice(float** matrice, int X, int Y){
	float** new_matrice = new float* [X];

	for(int k=0; k<X; k++){
		new_matrice[k] = new float[Y];
	}

	for(int i=0; i<X; i++){
		for(int j=0; j<Y; j++){
			if(matrice[i][j] == 0){
				new_matrice[i][j] = 0;
			}else{
				new_matrice[i][j] = 1 / matrice[i][j];
			} 
		}
	}

	return new_matrice;

}



int main(int argc, char* argcv[]){

	fstream inP;

	inP.open(argcv[1], ios::in);

	//float** matrice_originale = genera_matrice(righe, colonne);
	float** matrice_originale = genera_matrice_input(inP, righe, colonne);
	stampa_matrice(matrice_originale, righe, colonne);
	float** new_matrice = modifica_matrice(matrice_originale, righe, colonne);
	stampa_matrice(new_matrice, righe, colonne);

	inP.close();

	return 0;
}











