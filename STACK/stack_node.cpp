#include <iostream>

using namespace std;

struct nodo{
	int val;
	nodo* next;
};

typedef nodo * stack;

int main(){

	return 0;
}

void init(stack &s){

	s = NULL;
}

void deinit(stack &s){
	nodo* n = s;
	while(n != NULL){
		nodo* temp = n;
		n = n->next;
		delete temp;
	}
}

bool vuoto(const stack &s){
	if(s == NULL){
		return true;
	}else{
		return false;
	}
}

void aggiungi(stack &s, int val){
	nodo* n = new nodo;
	n->val = val;
	n->next = s;
	s = n;
}

bool pop(stack &s){
	if(vuota(s)){
		return false;
	}else{
		nodo* temp = s;
		s = s->next;
		delete temp;
		return true;
	}
}

bool top(const stack &s, int &val){
	if(vuota(s)){
		return false;
	}else{
		val = s->val;
		return true;
	}
}

void stampa(const stack &s){
	nodo* n = s;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
	cout << endl;
}


















