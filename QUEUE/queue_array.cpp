#include <iostream>

using namespace std;

struct queue{
	int head, tail;
	int dimenisone;
	int* elementi;
}

int main(){

	return 0;
}

static int next(int index, const queue &q){
	return (index + 1) % q.dimenisone;
}

void init(queue &q, int dimenisone){
	q.haed = q.tail = 0;
	q.dimenisone = dimenisone;
	q.elementi = new int*[dimenisone];
}

void deinit(queue &q){
	delete[] q.elementi;
}

bool is_empty_(const queue &q){

	return q.head == q.tail;
}

bool is_full(const queue &q){

	return next(q.tail, q) == q.head;
}

bool enqueue(queue &q, int val){
	if(is_full(q)){
		return false;
	}else{
		q.elem[q.tail] = val;
		q.tail = next(q.tail, q);
		return true;
	}
}

bool first(const queue &q, int &val){
	if(is_empty_(q)){
		return false;
	}else{
		val = q.elementi[q.head];
		return true;
	}
}

bool dequeue(queue &q){
	if(is_empty_(q)){
		return false;
	}else{
		q.head = next(q.head, q);
		return true;
	}
}

void print(const queue &q){
	for(int i=q.head; i!=q.tail; i = next(i, q)){
		cout << q.elementi[i] << " ";
	}
	cout << endl;
}








