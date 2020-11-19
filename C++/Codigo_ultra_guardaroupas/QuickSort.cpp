#include <iostream>
using namespace std;
#define TAM 5

void imprime_vetor(int vetor[TAM]){
    int i;
    cout << endl;    
    for(i = 0; i < TAM; i++){
      cout << "|" << vetor[i] << "|";
     }
}

void quick_sort(int vetor[TAM], int inicio, int fim){
    int pivo, meio, esq, dir, aux;
    dir = fim;
    esq = inicio;
    
    meio = (int) ((dir + esq)/2);
    pivo = vetor[meio];
    
    while(esq < dir){
    while(vetor[esq] < pivo){
        esq = esq + 1;
    }
    while(vetor[dir] > pivo){
        dir = dir -1;
    }
    if (esq <= dir){
        aux = vetor[esq];
        vetor[esq] = vetor[dir];
        vetor[dir] = aux;
        
        esq = esq + 1;
        dir = dir - 1;
    }
    imprime_vetor(vetor);
}
    if(inicio < dir){
       quick_sort(vetor, inicio, dir);
    }
    if(esq < fim){
        quick_sort(vetor, inicio, dir);
    }
}
        
int main(int argc, char *argv[])
{
	int vetor[TAM] = {5,4,3,2,1};
	
	quick_sort(vetor, 0, TAM);
	
	return 0;
}
