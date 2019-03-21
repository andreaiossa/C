#include <iostream> 
#include <cstdlib>
#include <fstream> 
#include <cstring> 
using namespace std;

int main(int argc, char* argv[]){

	fstream inP, outP;
	char first[31];

	if (argc!=3) {
		cout << "Usage: ./a.out <sourcefile>\n";
		exit(0);
	}

	inP.open(argv[1], ios::in);
	outP.open(argv[2], ios::out);

	inP >> first;


	if (!(first[0] >= 'A' && first[0] <= 'Z')){

		first[0] = first[0] + ('A' - 'a');
	}

	outP << first << ' ';

	while(!inP.eof()){
		
		if(first[strlen(first) - 1] == '?'){
			
			inP >> first;
			if (!(first[0] >= 'A' && first[0] <= 'Z')){

				first[0] = first[0] + ('A' - 'a');
			}
		}
		else{

			inP >> first;
		}

		outP << first << ' ';
	}
		

	inP.close();
	outP.close();
	return(0);

//ahjb zvihdsbvhbdsvhidbsisdhvb

}