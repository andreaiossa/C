#include <iostream>

using namespace std;

struct Stack{

	int index;
	int dim;
	double *elem;
}


int main(){


	return 0;
}



static bool is_empty(Stack &s){

	return s.index == 0;
}

static bool is_full(Stack &s){

	return s.index == s.dim; 
}

void init(Stack &s; int maxdim){

	s.index == 0;
	s.dim = maxdim;
	s.elem = double[maxdim];
}

void deinit(Stack &s){
	delete s.elem;
}

bool push(Stack &s; double n){
	if(is_full(s)){
		return false;
	}else{
		s.elem[s.index++] = n;
		return true;
	}
}

bool pop(Stack &s){
	if(is_empty(s)){
		return false;
	}else{
		s.index--;
		return true;
	}
}


bool top(Stack &s, double &param){
	if(is_empty(s)){
		return false;
	}else{
		param = s.elem[index - 1];
		return true;
	}
}

void print(Stack &s){
	for(int i = 0; i< s.index; i++){
		cout << s.elem[i] << " ";
	} 
}


















