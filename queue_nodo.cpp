#include <iostream>

using namespace std;

struct nodo{
	int val;
	nodo* next;
}

struct queue{
	nodo* head;
	nodo* tail;
}

void init(queue &q){
	q.head = q.tail = NULL;
}

bool vuoto(queue &q){
	if((q.head == NULL) && (q.tail == NULL)){
		return true;
	}else{
		return false;
	}
}

void inserire(queue &q, int valore){
	nodo* n = new nodo;
	n->val = valore;
	n->next = NULL;

	if(vuoto(q)){
		q.head = q.tail = n;
	}else{
		q.tail->next = n;
		q.tail = n;
	}
}

bool deinit(queue &q){
	nodo* first;
	if(vuoto(q)){
		return false;
	}else{
		first = q.head;
		q.head = q.head->next;
		delete first;

		if(vuoto(q)){
			q.tail = NULL;
		}

		return true;
	}
}

bool top(queue &q, int &val){
	if(vuoto(q)){
		return false;
	}else{
		val = q.head->val;
		return true;
	}
}

void print(queue &q){
	nodo* n = q.tail;
	while(n != NULL){
		cout << n->val << endl;
		n = n->next;
	}
}















