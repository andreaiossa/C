#include <iostream>

using namespace std;

struct Nodo{
	int val;
	Nodo *sx;
	Nodo *dx;
};

typedef Nodo * Albero;

void inizializza(Albero &a);
bool vuoto(Albero &A);
bool inserisci(Albero &a, int n);
bool cerca(Albero &a, int n);
void stampa(Albero &a);

int main(){

	int valore;

	char res;
	Albero albero;
	inizializza(albero);

	cout << "inserisci un valore: ";
	cin >> valore;
	if (!inserisci(albero, valore)) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (!inserisci(albero, valore)) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (!inserisci(albero, valore)) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (!inserisci(albero, valore)) {
		cout << "Valore gia‘ presente!" << endl;
	}


	cout << "inserisci un valore da cercare: ";
	cin >> valore;

	if (cerca(albero, valore)) {
		cout << "Valore presente: " << valore << endl;
	} else {
		cout << "Valore non presente" << endl;
	}
	

	stampa(albero);
	cout << endl;

	return 0;
}

void inizializza(Albero &a){
	a = NULL;
}

bool vuoto(Albero &a){
	if(a == NULL){
		return true;
	}else{
		return false;
	}
}

bool inserisci(Albero &a, int n){
	if(vuoto(a)){
		a = new (nothrow) Nodo;
		 if(a == NULL){
			return false;
		} 
		a->val = n;
		a->sx = NULL;
		a->dx = NULL;
		return true;
	}else{
		if(n <= a->val){
			return inserisci(a->sx, n);
		}else{
			return inserisci(a->dx, n);
		}
	}
}


bool cerca(Albero &a, int n){
	if(vuoto(a)){
		return false;
	}else{
		if(n == a->val){
			return true;
		}else if(n < a->val){
			return cerca(a->sx, n);
		}else{
			return cerca(a->dx, n);
		}
	}
}

void stampa(Albero &a){
	if(!vuoto(a)){
		stampa(a->sx);
		cout << a->val << " ";
		stampa(a->dx);
	}
}












