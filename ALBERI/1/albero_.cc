#include <iostream>
#include "albero.h"

using namespace std;

void inizializza(Albero &a){
	a == NULL;
}

boolean vuoto(Albero &A){
	if(a == NULL){
		return VERO;
	}else{
		return FALSO;
	}
}

boolean inserisci(Albero &a, int n){
	if(vuoto(a) == TRUE){
		a = new Nodo;
		if(a==NULL){
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
	}else if(a->val < n){
		return cerca(a->sx, n);
	}else{
		return cerca(a->dx, n);
	}
}

void stampa(Albero &a){
	if((a->sx == NULL) && (a->dx == NULL)){
		cout << a->val << " ";
		cout << endl;
	}else{
		if(a->sx != NULL){
			stampa(a->sx);
		}
		cout << a->val << " ";
		if(a->dx != NULL){
			stampa(a-dx);
		}
	}
}















