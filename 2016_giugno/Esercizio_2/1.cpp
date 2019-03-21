#include <iostream>
using namespace std;

void invert(char str[], int lenght);
void aux_invert(char str[], int position, int counter);

int main(){

char test[4] = {'a', 'b', 'c', 'd'};
cout << test << endl;

invert(test, 4);

cout << test << endl;

return 0;
}



void invert(char str[], int lenght){

	aux_invert(str, 0, (lenght - 1));
}

void aux_invert(char str[], int position, int counter){

	if (!(position == counter)){

		if(position == (counter -1)){

			char temp = str[counter];
			str[counter] = str[position];
			str[position] = temp;

		}else{

			char temp = str[counter];
			str[counter] = str[position];
			str[position] = temp;
			aux_invert(str, (position + 1), (counter - 1));
		}
	}
}




