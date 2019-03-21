#include <iostream>
#include <string>
using namespace std;

const char SEGNAPOSTO = '!';
const int DIMMAX = 40;

void reverse_array(char input[], int dimensione);
void reverse_array_wrapper(char input[], int dimensione, int indice);


int main (int argc, char* argv[]) {

	char input[DIMMAX];
	cout << "Introdurre stringa da invertire: ";
	cin >> input;

	reverse_array(input, strlen(input));
	cout << "Array invertito: " << input << endl;

	return 0;
}


void reverse_array(char input[], int dimensione){

	reverse_array_wrapper(input, dimensione - 1, 0); 
}


void reverse_array_wrapper(char input[], int dimensione, int indice){

	if((input[indice] == 'a') || (input[indice] == 'e') || (input[indice] == 'i') || (input[indice] == 'o') || (input[indice] == 'u')){
		input[indice] = SEGNAPOSTO;
	}

	if(!(indice == dimensione)){

		if(indice == dimensione - 1){
			
			char temp = input[indice];
			input[indice] = input[dimensione];
			input[dimensione] = temp;

			if((input[indice] == 'a') || (input[indice] == 'e') || (input[indice] == 'i') || (input[indice] == 'o') || (input[indice] == 'u')){
				input[indice] = SEGNAPOSTO;
			}

		}else{

			char temp = input[indice];
			input[indice] = input[dimensione];
			input[dimensione] = temp;

			if((input[indice] == 'a') || (input[indice] == 'e') || (input[indice] == 'i') || (input[indice] == 'o') || (input[indice] == 'u')){
				input[indice] = SEGNAPOSTO;
			}

			reverse_array_wrapper(input, dimensione - 1, indice + 1);
		}
	}
}



