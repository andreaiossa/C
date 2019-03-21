#include <iostream>
#include <cstring>
#include <fstream> 

using namespace std;

int main(int argc, char * argcv[]){

	fstream inP, outP;
	inP.open(argcv[1], ios::in);
	outP.open(argcv[2], ios::out);

	char parola[30];

	inP >> parola;
	if(parola[0] >= 'a' && parola[0] <= 'z'){
		parola[0] = parola[0] + ('A' - 'a');
	} 
	outP << parola;

	while(!inp.euof()){
		if(parola[strlen(parola)] == '.' || parola[strlen(parola)] == '!' || parola[strlen(parola)] == '?'){
			inP >> parola;
			if(parola[0] >= 'a' && parola[0] <= 'z'){
				parola[0] = parola[0] + ('A' - 'a');
			}
		}else{
			inP >> parola;
		}

		outP << parola;
	}



	inP.close();
	outP.close();

	return 0;
}