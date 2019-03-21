#include <iostream>

using namespace std;

struct node{
	float val;
	node *next;
}

struct queue{
	node *head;
	node *tail;
}

int main(){

	return 0;
}

void crea(queue &q){
	q.head = q.tail = NULL;
}

bool vuota(const queue &q){
	if(q.head == NULL){
		return true;
	}else{
		return false;
	}
}

void inserisci(queue &q, float val){
	node *n = new node;
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
	node *first;
	if(vuota(q)){
		return false;
	}else{
		first = q.head;
		q.head = q.head->next;
		delete first;

		if(vuota(q)){
			q.tail = NULL;
		}

		return true;
	}
}

bool primo(const queue &q, float &result){
	if(vuota(q)){
		return false;
	}
	result = q.head->val;
	return true;
}

void stampa(const queue &q){

	node *n = q.head;

	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}

	cout << endl;
}













