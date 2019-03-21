#include <iostream>

using namespace std;

struct Nodo{
	double val;
	Nodo* next;
};

struct Queue{
	Nodo* head;
	Nodo* tail;
};

int main(){
	return 0;
}

void crea(Queue &q){
	q.head = q.tail = NULL;
}

bool vuota(const Queue &q){
	if(q.head == NULL){
		return true;
	}else{
		return false;
	}
}

bool inserisci(Queue &q, double val){
	Nodo* n = new Nodo;
	n->val = val;
	n->next = NULL;
	if(vuota(q)){
		q.head = q.tail = n;
		if(vuota(q)){
			return false;
		}
	}else{
		q.tail->next = n;
		q.tail = n;
		return true;
	}
}

bool elimina(Queue &q){
	Nodo* temp;
	if(vuota(q)){
		return false;
	}else{
		temp = q.head;
		q.head = q.head->next;
		delete temp;

		if(vuota(q)){
			q.tail = NULL;
		}

		return true;
	}
}

void stampa(const Queue &q){
	Nodo *n = q.head;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
	cout << endl;
}


bool primo(const Queue &q, double &n){
	if(vuota(q)){
		return false;
	}else{
		n = q.head->val;
		return true;
	}
}















