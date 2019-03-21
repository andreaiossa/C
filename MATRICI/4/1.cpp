#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int numero_parole = 10000;
const int lunghezza_massima = 100;

int main(int argc, char * argcv[]){

	fstream inP1, inP2, outP;

	inP1.open(argcv[1], ios::in);
	inP2.open(argcv[2], ios::in);
	outP.open(argcv[3], ios::out);

	char parola[lunghezza_massima];
	char ** parole = new char* [numero_parole];
	int counter = 0;

	for(int i = 0; i < numero_parole; i++){
		parole[i] = new char[lunghezza_massima];
	}

	for(int i =0; i<numero_parole; i++){
		if(!inP1.eof()){
			inP1 >> parola;
			cout << parola << endl;
			strcpy(parole[i], parola);
			counter ++;
		}
	}

	for(int i=0; i<numero_parole; i++){
		if(!inP2.eof()){
			inP2 >> parola;
			for(int j=0; j < counter; j++){
			
				if(strcmp(parole[j], parola) == 0){
					outP << parola << endl;
		
				}	
			}
		}
	}

	inP1.close();
	inP2.close();
	outP.close();

	return 0;
}