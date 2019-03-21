#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(int argc, char * argcv[]){

int lenght1, lenght2;
int l1, l2;
fstream inP1, inP2, outP;

inP1.open(argcv[1], ios::in);
inP2.open(argcv[2], ios::in);
outP.open(argcv[3], ios::out);

inP1 >> lenght1;
inP2 >> lenght2;

char array1[lenght1][255];
char word1[255];
char word2[255];

for(int i = 0; i < lenght1; i++){
	inP1 >> word1;
	strcpy(array1[i], word1);
}

for(int i = 0; i < lenght2; i++){
	inP2 >> word2;
	cout << word2 << endl;

	for(int j = 0; j < lenght1; j++){
		if(strcmp(word2, array1[j]) == 0){
			outP << word2 << endl;
		} 
	}
}

inP1.close();
inP2.close();
outP.close();

return 0;

}