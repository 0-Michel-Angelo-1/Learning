#include <iostream>
using namespace std;
#define TAM 10

void imprime_vetor(int vetor[TAM]){
    int i;
    cout << endl;
    for(i = 0; i<TAM; i++){
        cout << "|" << vetor[i]               << "|";
    }
}

void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){
    int i, j, k;
    int p1 = meio - indiceEsquerdo + 1;
    int p2 = indiceDireito - meio;       
    int vetorEsquerdo[p1];
    int vetorDireito[p2];
  /*passa os elementos do vetor principal para primeiro vetor auxiliar(ESQUERDA)*/
    for(i = 0; i < p1; i++){          vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }
    /*passa os elementos do vetor principal para segundo vetor auxiliar(DIREITA)*/   
    for(j = 0; j < p2; j++){
    vetorDireito[j] = vetor[meio + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = indiceEsquerdo;
    while(i < p1 && j < p2){
    
     if(vetorEsquerdo[i] <= vetorDireito[j]){
       /*passa para o vetor principal o valor correspondente a parte esquerda*/
         vetor[k] = vetorEsquerdo[i];
      /*incrementa mais um local e repete a verificação*/
         i++;
     }
     else{
      /*passa para o vetor principal o valor correspondente a parte esquerda*/
      vetor[k] = vetorDireito[j];
      /*incrementa mais um local e repete a verificação*/
      j++;
     }
     k++;
    }
   /*se faltarem elementos para o array ESQUERDO, manda-os para o array principal*/
    while(i < p1){
     vetor[k] = vetorEsquerdo[i];
     i++;
     k++;
    }
     /*se faltarem elementos para o array DIRETO, manda-os para o array principal*/
    while(j < p2){
     vetor[k] = vetorDireito[j];
     j++;
     k++;
    }
    
}
void mergeSort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){
    if(indiceEsquerdo < indiceDireito){
    //encontra o meio da lista(posição do meio)
    int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo)/2;
    //do meio pra tras
    mergeSort(vetor, indiceEsquerdo, meio);
    //do meio pra frente
    mergeSort(vetor, meio+1, indiceDireito);
    
    imprime_vetor(vetor);
    
   merge(vetor, indiceEsquerdo, meio, indiceDireito);
    }
}

int main(int argc, char *argv[])
{
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	mergeSort(vetor, 0, TAM-1);
	
	imprime_vetor(vetor);
	return 0;
}
