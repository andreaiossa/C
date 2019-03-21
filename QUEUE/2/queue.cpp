#include <iostream>

using namespace std;


struct Nodo{
	int val;
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

void inserisci(Queue &q, int val){
	Nodo* n = new Nodo;
	n->val = val;
	n->next = NULL;
	if(vuota(q)){
		q.head = q.tail = n;
	}else{
		q.tail->next = n;
		q.tail = n;
	}
}

bool elmina(Queue &q){
	if(vuota(q)){
		return false;
	}else{
		Nodo* temp;
		temp = q.head;
		q.head->next = q.head;
		delete temp;
		if(vuota(q)){
			q.tail = NULL;
		}
	}
}

bool primo(const Queue &q, int &val){
	if(vuota(q)){
		return false;
	}else{
		val = q.head->val;
		return true;
	}
}

void stampa(const Queue &q){
	Nodo* n;
	n = q.head;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
}




















