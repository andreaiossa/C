#include <iostream>

using namespace std;

struct Nodo {
	int val;
	Nodo *sx;
	Nodo *dx;
};

typedef Nodo * Albero;
enum boolean { VERO, FALSO };

void inizializza(Albero &a);
boolean vuoto(Albero &A);
boolean inserisci(Albero &a, int n);
boolean cerca(Albero &a, int n);
void stampa(Albero &a);

int main(){

	int valore;

	char res;
	Albero albero;
	inizializza(albero);

	cout << "inserisci un valore: ";
	cin >> valore;
	if (inserisci(albero, valore) == FALSO) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (inserisci(albero, valore) == FALSO) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (inserisci(albero, valore) == FALSO) {
		cout << "Valore gia‘ presente!" << endl;
	}

	cout << "inserisci un valore: ";
	cin >> valore;
	if (inserisci(albero, valore) == FALSO) {
		cout << "Valore gia‘ presente!" << endl;
	}


	cout << "inserisci un valore da cercare: ";
	cin >> valore;

	if (cerca(albero, valore) == VERO) {
		cout << "Valore presente: " << valore << endl;
	} else {
		cout << "Valore non presente" << endl;
	}
	

	stampa(albero);
	
	return 0;
}


void inizializza(Albero &a){
	a = NULL;
}

boolean vuoto(Albero &a){
	if(a == NULL){
		return VERO;
	}else{
		return FALSO;
	}
}

boolean inserisci(Albero &a, int n){
	if(vuoto(a) == VERO){
		a = new (nothrow) Nodo;
		if(a == NULL){
			return FALSO;
		}
		a->val = n;
		a->sx = a->dx = NULL;
		return VERO;
	}else{
		if(n <= a->val){
			inserisci(a->sx, n);
		}else{
			inserisci(a->dx, n);
		}
	}
}

boolean cerca(Albero &a, int n){
	if(vuoto(a) == VERO){
		return FALSO;
	}else if(a->val == n){
		return VERO;
	}else if(n < a->val){
		return cerca(a->sx, n);
	}else{
		return cerca(a->dx, n);
	}
}

void stampa(Albero &a){
	if((a->sx == NULL) && (a->dx == NULL)){
		cout << a->val << " ";
	}else{
		if(a->sx != NULL){
			stampa(a->sx);
		}
		cout << a->val << " ";
		if(a->dx != NULL){
			stampa(a->dx);
		}
	}
}
