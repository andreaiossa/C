#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct nodo{
    vector<int> vicini;
    bool visited = false;
};

int main() {

    int N, M
    ifstream in("input.txt");
    vector<nodo> grafo;
    in >> N >> M;
    grafo.resize(N);

    for(int i=0; i < M; i++){
        int from, to;
        in >> from >> to;
        grafo[from].vicini.push_back(to);
    }

    ofstream output("output.txt");
    output<<toReach.size();


}

int funrec(vector<nodo> &grafo, int Start){

    if(grafo[S].visited){
        return 0;
    }

    grafo[S].visited = true;
    int result = 1;
    for(int i : grafo[S].vicini){
        result += funrec(grafo, i);
    }

    return result;
}