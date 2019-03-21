#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

const int lunghezza_massima = 80;

int main(int argc, char * argcv[]){

	fstream inP, outP;
	inP.open(argcv[1], ios::in);
	outP.open(argcv[3], ios::out);

	int numero_righe = atoi(argcv[2]);
	char * righe[numero_righe];
	char riga[80];

	for(int i=0; i<numero_righe; i++){
		if(!inP.eof()){
			inP.getline(riga, lunghezza_massima);
			righe[i] = new char[lunghezza_massima];
			strcpy(righe[i], riga);
		}
	}

	for(int i=numero_righe; i>0; i--){
		if((i % 2 != 0) && (i != numero_righe)){
			outP << righe[i] << endl;
		}
	}

	inP.close();
	outP.close();



	return 0;
}