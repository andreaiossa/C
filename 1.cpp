#include <string>
#include <vector>

using namespace std;

vector<int> V = {9, 1, 9};
int K = 2;
vector<vector<int>> DP(V.size(), vector<int>(K+1, -1));

int sottoseq(int i, int k){

 	if(i >= V.lenght()){
 		return 0;
 	}


 	if(DP[i][k] = -1){
 		int prendo = V[i] + sottoseq(i+1, k-1);
 		int non_prendo = (k > 0) ? (V[i] + sottoseq(i+1, k-1)) : 0;
 		
 		DP[i][k] = max(non_i, max(solo_i, i_e_j));											
 	}
 	return DP[i][k];
}



int main(){

	cout << sottoseq(0, K) << end;

	return 0;
}