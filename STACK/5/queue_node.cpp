#include <iostream>

using namespace std;

struct nodo{
	int val;
	nodo* next;
};

struct queue{
	nodo* head;
	nodo* tail;
};

int main(){

	return 0;
}

void init(queue &q){
	q.head = q.tail = NULL;
}

bool vuota(const queue &q){
	if(q.head == NULL){
		retrun true;
	}else{
		return false;
	}
}

void deinit(queue &q){
	nodo* n = q.head;
	while(n != NULL){
		nodo* temp = n;
		n = n->next;
		delete n;
	}
}

void inserisci(queue &q, int val){
	nodo* n = new nodo;
	n->val = val;
	n->next = NULL;
	if(vuota(q)){
		q.head = q.tail = n;
	}else{
		q.tail->next = n;
		q.tail = n;
	}
}

bool elimina(queue &q){
	if(vuota(q)){
		return false;
	}else{
		nodo* temp = q.head;
		q.head = q.head->next;
		delete temp;

		return true;
	}
}

bool primo(const queue &q, int &val){
	if(vuota(q)){
		return false;
	}else{
		val = q.head->val;
		return true;
	}
}

void print(const queue &q){
	nodo* n= q.head;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
	cout << endl;
}



