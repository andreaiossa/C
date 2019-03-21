#include <iostream>

using namespace std;

struct Stack{
	int index;
	int dimensione;
	int* elementi;
};



int main(){


	return 0;
}

bool is_empty_(const Stack &s){
	if(s.index == 0){
		return true;
	}else{
		return false;
	}
}

bool is_full(const Stack &s){
	if(s.index == s.dimensione){
		return true;
	}else{
		return false;
	}
}

void init(Stack &s, int dimensione){
	s.index = 0;
	s.dimensione = dimensione;
	s.elementi = new int[dimensione];
}

void deinit(Stack &s){
	s.index = 0;
	delete[] s.elementi;
 }

bool push(Stack &s, int n){
	if(is_full(s)){
		return false;
	}else{
		s.elementi[s.index] = n;
		s.index++;
		return true;
	}
}

bool pop(Stack &s){
	if(is_empty_(s)){
		return false;
	}else{
		s.index--;
		return true;
	}
}

bool top(const Stack &s, int &n){
	if(is_empty_(s)){
		return false;
	}else{
		n = s.elementi[s.index -1];
		return true;
	}
}

void stampa(const Stack &s){
	for(int i=0; i<s.dimensione; i++){
		cout << s.elementi[i] << " ";
	}
	cout << endl;
}







































