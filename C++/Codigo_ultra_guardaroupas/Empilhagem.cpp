#include <iostream>
#define TAM 3

using namespace std;

#include "funcoes.h"

int main(int argc, char *argv[])
{
    int pilha[TAM];
    int topo = -1;
    
  pilha_construtor(pilha, &topo);
    
  pilha_push(pilha, 3, &topo);
    
  cout <<"tamanho da pilha é: "         <<  tamanho_pilha(topo)
       << endl;
       
    imprime_vetor(pilha, topo);   
 cout << "ultimo elemento da pilha:"
      << pilha_get(pilha, &topo)
      << endl;
      
    imprime_vetor(pilha,topo) ;
  
      cout << "\n";
   pilha_pop(pilha, &topo);
   
    cout << "pilha atual:\n";
    
  pilha_construtor(pilha, &topo);

         
      
    imprime_vetor(pilha, topo);
 
          
    return 0;
	
}
/*sobre a variavel topo...
   topo contém a primeira 
   informação ao ser                desempilhado...
   por isso deve ser retirado 1,
   pois cada vez que é retirado     uma informação, ela deixa de     ser o topo.
   */
   
   /*sobre o endereçamento e 
      referências a variavel "topo":
      O endereçamento teve como                     objetivo  receber a variação de 
      valor durante a função "piha_push"
      --------------------
      As referencias servem para
      enviar o novo valor a variavel         
      "topo".
      */
      
      
      
   
  
   