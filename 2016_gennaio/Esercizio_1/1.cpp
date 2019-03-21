#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]){

	
	if(argc != 4) {
		cout << "ERROR" << endl;
		exit(0);
	}

	fstream inP, outP;
	int max_lenght = 79;
	char line[max_lenght];
	int numero_righe = atoi(argv[2]);
	char* str_array[numero_righe];
	int counter = 0;

	inP.open(argv[1], ios::in);
	outP.open(argv[3], ios::out);

	for(counter = 0; counter < numero_righe; counter++){

		inP.getline(line, max_lenght);

		str_array[counter] = new char[max_lenght];
		strcpy(str_array[counter], line);
	}

	for(int i = numero_righe; i > 0; i-- ){
		if(!(i % 2 == 0) || (i == 0)){
			outP << str_array[i] << endl;
		}
	}

	
	inP.close();
	outP.close();
	return 0;         



}
