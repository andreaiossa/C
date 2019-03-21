#include <iostream>

using namespace std;

struct Stack{
	int index;
	int dimensione;
	double* elem;
};



void init(Stack &s, int maxdim);
void deinit(Stack &s);
bool is_empty_(const Stack &s);
bool is_full(const Stack &s);
bool push(Stack &s, double n);
bool pop(Stack &s);
bool top(const Stack &s, double &n);
void print(const Stack &s);

int main(){

	int maxdim = 6;
	double valore;
	Stack s;

	init(s, maxdim);

	cout << "Inserisci un numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	cout << "Inserisci un altro numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	cout << "Inserisci un altro numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	cout << "Inserisci un altro numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	cout << "Inserisci un altro numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	cout << "Inserisci un altro numero: ";
	cin >> valore;
	if(push(s, valore)){
		cout << "l'inserimento è andato a buon fine." << endl;
	}else{
		cout << "L'inserimento non + andato a buon fine" << endl;
	}

	pop(s);
	top(s, valore);

	cout << valore << endl;

	print(s);

	return 0;
}

void init(Stack &s, int maxdim){
	s.index = 0;
	s.dimensione = maxdim;
	s.elem = new double[maxdim];
}

void deinit(Stack &s){
	s.index = 0;
	delete[] s.elem; 
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


bool push(Stack &s, double n){
	if(is_full(s)){
		return false;
	}else{
		s.elem[s.index] = n;
		s.index++;
		return true;
	}	
}

bool pop(Stack &s){
	if(is_empty_(s)){
		return false;
	}else{
		s.index--;
		return false;
	}
}

bool top(const Stack &s, double &n){
	if(is_empty_(s)){
		return false;
	}else{
		n = s.elem[s.index -1];
		return true;
	}
}

void print(const Stack &s){
	for(int i= 0; i< s.index; i++){
		cout << s.elem[i] << " ";
	}
}











