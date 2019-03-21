#include <iostream>

using namespace std;

const int dimensione = 6;

int  * shift(int vettore[], int dimensione, int j);
void shift_ricorsiva(int vettore[], int new_vettore[], int dimensione, int j, int indice, int posizione);


int main(){

	int vettore[dimensione] = {2, 17, 44, 202, 5, 13};
	int j = 3;

	int * new_vettore = shift(vettore, dimensione, j);

	for(int i = 0; i < dimensione; i++){
		cout << new_vettore[i] << " ";
	}

	cout << endl;

	return 0;
}


int  * shift(int vettore[], int dimensione, int j){
	int * new_vettore = new int[dimensione];
	shift_ricorsiva(vettore, new_vettore, dimensione, j, j, 0);
	return new_vettore;
}

void shift_ricorsiva(int vettore[], int new_vettore[], int dimensione, int j, int indice, int posizione){
	
	if(!(posizione == dimensione)){
		if(posizione >= j){
			new_vettore[posizione] = 0;
		}else{
			new_vettore[posizione] = vettore[indice];
		}
		shift_ricorsiva(vettore, new_vettore, dimensione, j, indice + 1, posizione + 1);
	}
}