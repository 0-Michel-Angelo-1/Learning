#include <iostream>
using namespace std;
#define TAM 5

void imprime_vetor(int vetor[TAM]);
void selection_sort(int vetor[TAM]);

int main(int argc, char *argv[])
{
	int vetor[TAM] = {2,3,5,1,4};
	selection_sort(vetor);
	
}


    
void imprime_vetor(int vetor[TAM]){
    int i;
    for(i = 0;i<TAM;i++){
        cout << "<" << vetor[i] << "> ";
    }
    cout << "\n--------------------\n";
}
//modo de ordenção por selecionação e análise de termo
void selection_sort(int vetor[TAM]){
    //posicaoMenor é uma variavel que receberá o menor termo na ordem da lista
    int posicaoMenorValor, aux, i, j;
   
    for(i = 0; i < TAM; i++){
        
        posicaoMenorValor = i;
        
    //J é termo depois de i
        for(j = i + 1; j < TAM; j++){
    //encontra um valor menor na frente dos analisados
     if(vetor[j] <   
     vetor[posicaoMenorValor]){
                posicaoMenorValor = j;
            }
        }
   /*faz uma substituição de valor caso encontre um valor menor na frente dos analisados
   */  
     if(posicaoMenorValor != i){
        aux = vetor[i];
    vetor[i]=vetor[posicaoMenorValor];
                                       vetor[posicaoMenorValor]=aux;
            
        }
        imprime_vetor(vetor);
    }
    
}