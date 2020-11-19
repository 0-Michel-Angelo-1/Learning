#include <iostream>
using namespace std;
#define TAM 5


void imprime_vetor(int vetor[TAM]);
int main(int argc, char *argv[])
{
	int vetor[TAM] = {5,4,3,2,1};
	int x, y, aux;
	
	
	
	for(x = 0; x < TAM; x++){
	    for(y = x + 1; y < TAM; y++){    //confere se precisa fazer a troca
	    imprime_vetor(vetor);
	    if(vetor[x] > vetor[y]){
	        aux = vetor[x];
	        vetor[x] = vetor[y];
	        vetor[y] = aux;
	    }
	    }
	}
	imprime_vetor(vetor);
	        
    return 0;
}

void imprime_vetor(int vetor[TAM]){
    int i;
    for(i = 0;i<TAM;i++){
        cout << "<" << vetor[i] << "> ";
    }
    cout << "\n--------------------\n";
}