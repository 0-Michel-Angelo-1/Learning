#include <iostream>
using namespace std;
#define TAM 10
#include <string>

string linha(40, '-');

void imprime_vetor(int vetor[TAM]){
    int i;
    cout << endl;
    cout << linha << endl;
    for(i = 0; i<TAM; i++){
        cout << "|" << vetor[i] << "|" << " ";
    }
}
void shell_sort(int vetor[TAM]){
    int i,j, atual;
    int h = 1;
    
    /*enquanto a posição é menor que o limite*/
    while(h < TAM){
        h = 3*h+1;
    }
    
    while(h > 1){
        /*enquanto a posição for maior que um, diminui o espaço entre a análise de numeros*/
        h = h /3;
        
        for(i = h; i < TAM;i++){
       //atual é o numero a ser ordenado no momento
         atual = vetor[i];
       //J analisa o termo anterior ao I
         j = i - h;    
         
        while((j >= 0) && (atual < vetor[j])){
            //empurrando os elementos para "frente"
            vetor[j + h] = vetor[j];
       //faz J andar para "tras"
               j = j - h; 
    }
    //colocando o termo em ordem
    vetor[j + h] = atual;
    
    imprime_vetor(vetor);
    }
    
  
  }    
    
   
    
}
int main(int argc, char *argv[])
{
	int vetor[TAM] = {4,2,5,1,6,8,7,9,3};
	imprime_vetor(vetor);
	shell_sort(vetor);
	
	return 0;
}