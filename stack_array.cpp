#include <iostream>

using namespace std;

struct  stack{
	int index;
	int dim;
	int* elementi;
};

void init(stack &s, int dimensione){
	s.index = 0;
	s.dim = dimensione;
	s.elementi = new int[s.dim];
}

void deinit(stack &s){
	delete[] s.elementi;
}

bool vuoto(stack &s){
	return s.index == 0;
}

bool pieno(stack &s){
	return s.index == dimensione;
}

bool inserisci(stack &s, int valore){
	if(pieno(s)){
		return false;
	}else{
		s.elementi[s.index++] = valore;
		return true;
	}
}

bool pop(stack &s){
	if(vuoto(s)){
		return false;
	}else{
		q.index--;
		return true;
	}
}


bool top(stack &s, int &val){
	if(vuoto(s)){
		return false;
	}else{
		val = s.elementi[s.index -1];
		return true;
	}
}

void print(stack &s){
	for(int i=0; i<s.index; i++){
		cout << s.elementi[i] << " ";
	}
}






