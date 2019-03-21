#include <iostream>
#include <vector>

using namespace std;

char *X = "BUBBASEESABANANA";

vector<vector<int>> DB(X.lenght(), vector<int>(X.lenght(),-1));

int is_palindroma(int i, int j){
	if(((i == j)|| (j = i+1)) && (X[i] == X[j])){
		return true;
	}
	if(X[i] == X[j]){
		return is_palindroma(i+1,j-1); 
	}
	return false;
}

int minimo_pal(int i, int j){

	if(j = X.lenght){
		return 0;
	}
	

	if(!is_palindroma(i,j)){
		return minimo_pal(i,j+1);
	}

	if(DP[i][j] == -1){
		
		int non_preso = 1 + minimo_pal(i+1, j+1); 
		int preso = minimo_pal(i, j+1);
		DP[i][j] = min(non_preso,preso);
	}
	return DP[i][j];
}





int main(){

	cout<<is_palindroma(0,0) << endl;

}