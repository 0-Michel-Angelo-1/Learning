#include<iostream>
using namespace std;
#define TAM 10

//------------FILAS--------------
void imprime_vetor(int fila[TAM], int tamanho, int *frente)
{
    int cont; 
    for (cont = 0; cont < TAM; cont++)
    {
        cout << fila[cont] << "-";
    }
    cout << endl;
  
    cout << "frente: " << fila[*frente] << endl;
}
//Constroi a estrutura da fila
void fila_construtor(int *frente, int *tras){
  *tras = -1;
  *frente = 0;
}
//Verifica se a fila está cheia
bool fila_cheia(int *tras){
    if(*tras == TAM - 1){
        return true;
    }
    else{
        return false;
    }
}
//Enfileira os dados
void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if(fila_cheia(tras)){
      cout << "fila cheia\n";
    }else{
    *tras = *tras + 1;
    fila[*tras] = valor;
    }
}
//Verifica se a fila ta vazia
bool fila_vazia(int frente, int tras){
    if(frente > tras){
        return true;
    }
    else{
        return false; 
        }   
}

//Desenfileira a fila
int fila_desenfileirar(int fila[TAM], int *frente, int tras){
  if(fila_vazia(*frente, tras)){
        cout << "fila vazia, nada para desenfileirar" << endl;
  }else{
        cout << "valor desenfileirado:" << fila[*frente] << endl;
        fila[*frente] = 0;
    *frente = *frente + 1;
  }
}

//Informa o tamanho da fila
int tamanho_fila(int *frente, int tras){
    return (*frente - tras) + 1;
}
    
//Função principal
int main(int argc, char *argv[])
{
	int fila[TAM];
	int frente,tras;
	int i;
	
	for(i = 0; i < TAM; i++){
	    fila[i] = 0;
	    cout << fila[i] << "-";
}
    cout << endl;
    
    fila_construtor(&frente, &tras);
    
    fila_enfileirar(fila, 4, &tras);
    
    imprime_vetor(fila,tamanho_fila(&frente, tras), &frente);
    
    fila_desenfileirar(fila, &frente, tras);
    
    imprime_vetor(fila,tamanho_fila(&frente, tras), &frente);
    
      fila_desenfileirar(fila, &frente, tras);
      
      fila_enfileirar(fila, 666, &tras);
    
      imprime_vetor(fila, tamanho_fila(&frente, tras), &frente);
    
    
}

    
