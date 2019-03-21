#include <iostream>

using namespace std;

struct stack{
	int index;
	int dimensione;
	int* elementi;
};


int main(){


	return 0;
}

void init(stack &s, int dimensione){
	s.index = 0;
	s.dimensione = dimensione;
	s.elementi = new int[dimensione];
}

void deinit(stack &s){
	delete[] s.elementi;
}

bool is_empty_(const stack &s){
	if(s.index == 0){
		return true;
	}else{
		return false;
	}
}

bool is_full(const stack &s){
	if(s.index == s.dimensione){
		return true;
	}else{
		return false;
	}
}

bool push(stack &s, int val){
	if(is_full(s)){
		return false;
	}else{
		s.elementi[s.index] = val;
		s.index++;
		return true;
	}
}

bool pop(stack &s){
	if(is_empty_(s)){
		return false;
	}else{
		s.index--;
		return true;
	}
}

bool top(const stack &s, int &val){
	if(is_empty_(s)){
		return false;
	}else{
		val = s.elementi[s.index];
		return true;
	}
}

void print(const stack &s){
	for(int i=0; i<s.index; i++){
		cout << s.elementi[i] << " ";
	}
	cout << endl;
}


































