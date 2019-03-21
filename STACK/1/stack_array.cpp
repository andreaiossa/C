#include <iostream>

using namespace std;

struct Stack{
	int index;
	int dim;
	double* elementi;
}

bool is_empty(Stack& s){

	return s.index == 0; 
}

bool is_full(Stack& s){

	return s.index == s.dim;
}

void init(Stack& s, int dimensione){
	s.index = 0;
	s.dim = dimensione;
	s.elementi = new double[dimensione];
}

void deinit(Stack& s){
	delete s.elementi;
}

bool inserisci(Stack& s, double elemento){
	if(is_full(s)){
		return FALSE;
	}else{
		s.elementi[s.index++] = elemento;
		return true;
	}
}

bool pop(Stack& s){
	if(is_empty(s)){
		return false;
	}else{
		s.index--;
		return true;
	}
}

bool top(Stack& s, double& param){
	if(is_empty(s)){
		return FALSE;
	}else{
		param = s.elementi[s.index - 1];
		return TRUE;
	}
}

void print(Stack &s){
	for(int i=0; i < s.index; i++){
		cout << s.elementi[i] << " ";
	}
	cout << endl;
}