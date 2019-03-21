#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

double calcola(int V, int D, int F, int P, double**** matrix);

int main(){

	ifstream inP("input.txt");
	int V, F, P = 0;
	
	inP >> V;
	inP >> F;
	inP >> P;



double**** matrix = new double***[V+ 1];
	for(int v=0; v <= V; v++){
		matrix[v] = new double**[V +1 ];
		for(int d=0; d <= V; d++){
			matrix[v][d] = new double*[F + 1];
			for(int f = 0; f <= F; f++){
				matrix[v][d][f] = new double[P + 1];
				for(int p=0; p <= P; p++){
					matrix[v][d][f][p] = -1;
				}
			}
		}
	}

	double risultato = calcola(V, 0, F, P, matrix);


	cout  << scientific << setprecision(10) << risultato << endl;


	return 0;
}

double calcola(int V, int D, int F, int P, double**** matrix){
	
	if(P == 0){
		return ((V + D) * F);
	}
	
	if(matrix[V][D][F][P] == -1){
		double check = 0;
		if(V > 0){
			check += (calcola(V - 1, D + 1, F, P - 1, matrix)) * (V/(V + D + F));
		}
		if(D > 0){
			check += calcola(V, D -1, F, P - 1, matrix) * (D/(V + D + F));
		}
		if(F > 0){
			check += calcola(V, D, F - 1, P - 1, matrix) * (F/(V + D + F));
		}

		matrix[V][D][F][P] = check;
		cout << check << endl;
	}

	return (matrix[V][D][F][P]);
} 

