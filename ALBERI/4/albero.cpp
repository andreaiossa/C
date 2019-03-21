#include <iostream>

using namespace std;


struct Nodo{
	int val;
	Nodo* sx;
	Nodo* dx;
};

typedef Nodo * Albero;

int main(){

	return 0;
}

void inizializza(Albero &a){
	a = NULL;
}

bool vuoto(const Albero &a){
	if(a==NULL){
		return true;
	}else{
		return false;
	}
}

bool inserisci(Albero &a, int n){
	if(vuoto(a)){
		a = new (nothrow) Nodo;
		if(a== NULL){
			return false;
		}
		a->val = n;
		a->sx = a->dx = NULL;
		return true;
	}else{
		if(n <= a->val){
			return inserisci(a->sx, n);
		}else{
			return inserisci(a->dx, n);
		}
	}
}

bool cerca(const Albero &a, int n){
	if(vuoto(a)){
		return false;
	}else{
		if(n == a->val){
			return true;
		}else if(n < a->val){
			return cerca(a->sx, n);
		}else if(n > a->val){
			return cerca(a->dx, n);
		}
	}
}

void stampa(const Albero &a){
	if(!vuoto(a)){
		stampa(a->sx);
		cout << a->val << " ";
		stampa(a->dx);
	}
}












