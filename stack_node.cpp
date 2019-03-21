#include <iostream>

using namespace std;

struct nodo{
	int val;
	nodo* next;
}

typedef nodo* stack;


void init(stack &s){
	s = NULL;
}

bool vuoto(stack &s){
	return s==NULL;
}

void inserisci(stack &s, int valore){
	nodo* n = new node;
	n->val = valore;
	n->next = s;
	s = n;
}

void deinit(stack &s){
	nodo* n = s;
	while(n != NULL){
		nodo* temp = n;
		n = n->next;
		delete temp;
	}
}

bool pop(stack &s){
	if(vuoto(s)){
		return false;
	}else{
		nodo* temp = s;
		s = s->next;
		delete temp;
		return true;
	}
}

bool top(stack &s, int &val){
	if(vuoto(s)){
		return false;
	}else{
		val = s->val;
		return true;
	}
}


void stampa(stack &s){
	nodo* n = s;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
}














