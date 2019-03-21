#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct nodo{
	vector<int> vicini;
	bool visited = false;
};

int main() {

	int N, M, S;
	ifstream in("input.txt");
	vector<nodo> grafo;
	in >> N >> M >> S;
	grafo.resize(N);

	for(int i=0; i < M; i++){
		int from, to;
		in >> from >> to;
		grafo[from].vicini.push_back(to);
	}

	grafo[S].visited = true;
    vector<int> toReach;
    toReach.push_back(S);
    for (int i = 0; i < toReach.size(); i++) {
        for (int j = 0; j < grafo[toReach[i]].vicini.size(); j++) {
            if (!grafo[grafo[toReach[i]].vicini[j]].visited) {
                grafo[grafo[toReach[i]].vicini[j]].visited = true;
                toReach.push_back(grafo[toReach[i]].vicini[j]);
                
            }
        }
    }


    ofstream output("output.txt");
    output<<toReach.size();


}