#include <iostream>

using namespace std;

struct Nodo{
	char val;
	Nodo* next;
};

typedef Nodo * stack;


int main(){

	return 0;
}

void init(stack &s){
	s = NULL;
}

void deinit(stack &s){

	Nodo* n = s;

	while(n != NULL){
		Nodo* temp = n;
		n = n->next;
		delete n;
	}
}

bool nempty(const stack &s){
	if(s == NULL){
		return true;
	}else{
		return false;
	}
}

void push(stack &s, char c){
	Nodo* n = new Nodo;
	n->val = c;
	n->next = s;
	s = n;
}

bool pop(stack &s){
	if(nempty(s)){
		return false;
	}else{
		Nodo* temp = s;
		s = s->next;
		delete temp;
		return true;
	}
}

bool top(const stack &s, char &c){
	if(nempty(s)){
		return false;
	}else{
		c = s->val;
		return true;
	}
}

void print(const stack &s){
	Nodo* n = s;
	while(n != NULL){
		cout << n->val << " ";
		n = n->next;
	}
	cout << endl;
}










