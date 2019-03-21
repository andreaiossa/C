#include <fstream>
using namespace std;


int x;
int somma;
int somma_parziale;

int main(){
    ifstream in("input.txt");
    in >>x;
    int array[x];
    for(int i=0; i<x; i++){
        in>>array[i];
    }
          
    int somma = array[0];
    int somma_parziale = 0;
    
    
    for(int a = 0; a< x; a++){
        somma_parziale += array[a];
        
        if (somma_parziale > somma){
             somma = somma_parziale;
        }
        
        else if (somma_parziale < 0){
            somma_parziale = 0;
        }
        
        
     
    }
    
   
   
    
    
    ofstream out("output.txt");
    out<<  somma << "\n";
    return 0;    
}
    
