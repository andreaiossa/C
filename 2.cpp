#include <iostream>
#include <vector>

using namespace std;

vector<int> X = {6, 6, 6, 6};
int k = 2;
int w = 18;

vector<vector<int>> DP(X.size(), vector<int>(k,1));


int funzione(int i, int j, int somma){

	int new_somma = X[i] + somma;

	if(new_somma > w){
		return funzione(i+1,j,somma);
	}
	if(i > X.size()){
		return 0;
	}
	if(k==0){
		return 0;
	}



	if(DP[i][j]==-1){
		int preso = X[i]+ funzione(i+1,j-1, new_somma);
		int non_preso = funzione(i+1, j, preso);
		int meglio = max(preso,non_preso);
		DP[i][j] = max(meglio, DP[i][j]);
	}
	return DP[i][j];
}





int main(){

	cout << funzione(0,k,0) << endl;
}