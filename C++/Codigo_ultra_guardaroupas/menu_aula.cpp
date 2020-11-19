#include<iostream>
using namespace std;
#include "funcoes_aula_menu.h"
#include <new>
 
  
int main(){
   
	int funcaoDesejada = 1;
	//cria um ponteiro que ler uma lista 
		pessoa *ponteiroSequencial;
	
	int tamanhoLista = 0;
	//cria uma lista de tamanho 2 do tipo pessoa
		pessoa *exemploListaSequencial = new pessoa[2];
	
	//atualiza a lista a ser lida pelo ponteiro
 	   ponteiroSequencial = exemploListaSequencial;
   
  
while(funcaoDesejada < 10 &&
	      funcaoDesejada >0){
	cout << "OPERAÇÕES" << endl;
	cout << "Opção-1--inserção de um node no inicio da lista \n";
	cout << "Opção-2--inserção de um node no fim da lista \n";
	cout << "Opção-3--inserção de um node na posição N da lista \n";
	cout << "Opção-4--Retirar um node do inicio da lista \n";
	cout << "Opção-5--Retirar um node do fim da lista \n";
	cout << "Opção-6--Retirar um node da posição N da lista \n";
	cout << "Opção-7--Procurar um node pelo campo RG\n";
	cout << "Opção-8--Imprimir a lista \n";
	cout << "Opção-9--Sair do sistema \n";
	cout << "DIGITE a opção e tecle ENTER:\n";
	cin >> funcaoDesejada;
	
	limpaTela();
	
	string nome;
	int rg;
	int posicao;
	
switch(funcaoDesejada){
case 1:
    cout << "opção 1-Escolhida.Opção-1--inserção de um node no inicio da lista \n";	     
    cout << "nome:";
	cin.ignore();
	getline(cin, nome);
	cout << "rg:";
	cin >> rg;
    addComecoSequencial(ponteiroSequencial, &tamanhoLista, nome, rg);
	imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
	break;
case 2:
    cout << "opção 2-Escolhida.inserção de um node no fim da lista  \n";
	cout << "nome:";
	cin.ignore();
	getline(cin, nome);
	cout << "rg:";
	cin >> rg;
	
	//checa se a lista esta vazia 
	if(tamanhoLista == 0){
	 addComecoSequencial(ponteiroSequencial, &tamanhoLista, nome, rg);  
     }else{
 	 addFimSequencial(ponteiroSequencial, &tamanhoLista, nome, rg);
	 }
	 imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
	break;
case 3:
    cout << "opção 3-Escolhida.inserção de um node na posição N da list \n";
    cout << "nome:";
	cin.ignore();
	getline(cin, nome);
	cout << "rg:";
	cin >> rg;
    cout << "Posicao:";
    cin >> posicao;
         
	//checa se a posicao eh a primeira	 
	if(posicao == 0){
	addComecoSequencial(ponteiroSequencial, &tamanhoLista, nome, rg);  		//checa se a posicao eh a ultima
	}else if(posicao == tamanhoLista){
	addFimSequencial(ponteiroSequencial, &tamanhoLista, nome, rg);
	}else{
	 //checa se a posicao ja existe na lista
	addPosicaoN(ponteiroSequencial, &tamanhoLista, nome, rg, posicao); 
    }
	 imprimeListaSequencial(ponteiroSequencial, tamanhoLista);   
    break;
case 4:
    cout << "opção 4-Escolhida.Retirar um node do inicio da lista \n";    
    if(tamanhoLista == 0){
    cout << "lista vazia! nao ha oque retirar.\n";
    }else{
    RetiraComeco(ponteiroSequencial,  &tamanhoLista, nome, rg );
    }
    imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
    break;
case 5:
	cout << "opção 5-Escolhida.Retirar um node do final da lista \n";    
	if(tamanhoLista == 0){
	cout << "nao ha oque retirar! Lista vazia. \n";
	}else{
	RetiraFinal(ponteiroSequencial, &tamanhoLista, nome, rg);
	}
	imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
	break;	
case 6:
    cout << "opção 6-Escolhida.Retirar um node da posição N da lista  \n";
    cout << "Posicao:";
    cin >> posicao;
    if(posicao == 0){
    RetiraComeco(ponteiroSequencial,  &tamanhoLista, nome, rg );
    }else if(posicao == tamanhoLista){
    RetiraFinal(ponteiroSequencial, &tamanhoLista, nome, rg); 
    }else{
    RetiraPosicaoN(ponteiroSequencial, &tamanhoLista, nome, rg, posicao);
    }
    imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
    break;
case 7:
    cout << "opção 7-Escolhida.Procurar um node pelo campo RG \n";
    cout << "rg:";
    cin >> rg;
    cout << "nome do rg " 
    		 << rg << ":" 
             <<ProcuraRg(ponteiroSequencial, &tamanhoLista, rg) 
             << endl;
    break;
case 8:
    cout << "opção 8-Escolhida.Imprimir a lista \n";
    if(tamanhoLista == 0){
    cout <<  "Lista vazia!";
    }else{
    imprimeListaSequencial(ponteiroSequencial, tamanhoLista);
    }
    cout << "\n\n";
                  
   break;
case 9:
    cout << "opção 9-Escolhida.Sistema Fechado\n";
      return 0;
    break;
default:
    cout << "Nenhuma opção escolhida!Re-executando programa...\n";
    main();
    break;	    
        	    
				}
	  	}
	 }