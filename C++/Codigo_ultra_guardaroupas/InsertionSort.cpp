#include <iostream>
using namespace std;
#define TAM 5

void imprime_vetor(int vetor[TAM]);
void insertion_sort(int vetor[TAM]);
int main(int argc, char *argv[])
{
	int vetor[TAM] = {5,4,3,2,1};
  
    imprime_vetor(vetor);
	insertion_sort(vetor);
	
    return 0;
}
void imprime_vetor(int vetor[TAM]){
    int i;
    for(i = 0;i<TAM;i++){
        cout << "<" << vetor[i] << "> ";
    }
    cout << "\n--------------------\n";
}

void insertion_sort(int vetor[TAM]){
    
    int i,j,atual;
    for(i = 1; i < TAM;i++){
       //atual é o numero a ser ordenado no momento
         atual = vetor[i];
       //J analisa o termo anterior ao X
         j = i - 1;    
         
        while((j >= 0) && (atual < vetor[j])){
            //empurrando os elementos para "frente"
            vetor[j + 1] = vetor[j];
       //faz J andar para "tras"
               j = j - 1; 
    }
    //colocando o termo em ordem
    vetor[j + 1] = atual;
    
    imprime_vetor(vetor);
    }
}