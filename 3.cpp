#include <iostream>
#include <vector>

using namespace std;

vector<int> X =  {−1, 3, 6, 4, 5, 7, 8};
int w = 13;

int funzione(int i, int somma){
	if(somma == w){
		return 1;
	}
	if(i>X.size()){
		return 0;
	}
	

	return funzione(i+1, somma + X[i]) + funzione(i+1, somma);
}

int main(){

	cout << funzione(0, 0) << endl;
}