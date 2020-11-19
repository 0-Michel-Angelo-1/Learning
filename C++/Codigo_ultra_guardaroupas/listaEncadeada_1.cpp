#include<iostream>
#include<new>
using namespace std;

//strutura responsavel por armazenar dados 
struct Dados{
	string nome;
	int id;
	struct Dados *proximo; 
};

void limpaTela(){
	system("clear");
}

int retornaTamanho(Dados *ponteiroEncadeado){
	//checa se a lista esta vazia
	if(ponteiroEncadeado->nome == ""){
		return 0;
	}
	
	int tamanho = 0;
	
	Dados *pAux = ponteiroEncadeado;
	
	while(pAux != NULL){
		//atualiza para a proxima posicao
		pAux = pAux->proximo;		
		/* cada vez que atualiza a proxima posicao, 
		o tamanho da lista aumenta
		*/
		tamanho++;
	}
	
	return tamanho;
}

void imprimeLista(Dados *ponteiroEncadeado){
	//ponteiro que ler os nodes da lista
	Dados *pAux = ponteiroEncadeado;

	while(pAux != NULL){
		cout  << pAux->nome <<", " << pAux->id << endl;
		
		pAux = pAux->proximo;
	}	

}
void addComecoEncadeado(Dados *&ponteiroEncadeado, string nome, int id){
	//cria uma nova estrutura
	Dados *novaEncadeada = new Dados();
	novaEncadeada->nome = nome;
	novaEncadeada->id = id;
	
	//verifica se a lista esta vazia
	if(ponteiroEncadeado->nome == ""){
		/*preenche o espaço vazio com um node, 
		   que ate entao eh o unico da lista
		*/ 
		novaEncadeada->proximo = NULL;
	}else{
		//aponta para a proxima posicao
		novaEncadeada->proximo = ponteiroEncadeado;	
	}
		
	//atualiza a estrutura
	ponteiroEncadeado = novaEncadeada;
}

void addFimEncadeado(Dados *&ponteiroEncadeado, string nome, int id){
	//cria uma nova estrutura							
	//guarda apenas os dados da opcao
	Dados *novaEncadeada = new Dados();
	novaEncadeada->nome = nome;
	novaEncadeada->id = id;
	novaEncadeada->proximo = NULL;
	
	Dados *pAux = ponteiroEncadeado;
	/*O "ponteiroEncadeado" serve para representar os outros valores
		da lista*/
	
	while(pAux != NULL){
		
		if(pAux->proximo == NULL){	
			//atribui um novo valor na ultima posicao
			pAux->proximo = novaEncadeada;
			return; 
		}
	 //percorre a lista ate que o proximo valor seja nulo
			pAux = pAux->proximo;
			
	}
}
void addPosicaoN(Dados *&ponteiroEncadeado, string nome, int id, int posicao){
	
	Dados *novaEncadeada = new Dados();
	novaEncadeada->nome = nome;
	novaEncadeada->id = id;
	
	Dados *pAux = ponteiroEncadeado;
	
	int cont = 0;
	while(cont <= posicao){
		
		if(cont == posicao - 1){
			/*Estrutura auxiiar, guarda os dados do node que 
			esta na proxima posicao, para wue nao sejam
			sobrescritos pela nova node(novaEncadeada)  
		  */
		Dados *aux = new Dados;
		
		//guarda a proxima node
		aux->proximo = pAux->proximo;
		
		//node na posicao da variavel posicao eh sobrescrita pela nova node
		pAux->proximo = novaEncadeada;
		
		/*atribuui o node guardado a proxima 
			posicao depois do novo node*/
		novaEncadeada->proximo = aux->proximo;  
		
		free(aux);
		}
	cont++;
	//percorre a lista
	pAux = pAux->proximo;
	}	   
}

void removeComecoEncadeado(Dados *&ponteiroEncadeado){
	if(ponteiroEncadeado->proximo == NULL){
		//estrutura vazia para zerar a lista
		Dados *valorVazio = new Dados;
		valorVazio->nome = "";
		valorVazio->id = 0;
		valorVazio->proximo == NULL;
		
		ponteiroEncadeado = valorVazio;
	}else{
		//o primeiro valor recebera o proximo, sendo assim substituido
		ponteiroEncadeado = ponteiroEncadeado->proximo;
			
	}
}

void removeFim(Dados *&ponteiroEncadeado){
	//auxiliares
	Dados *p = new Dados();
	Dados *aux = new Dados();
	
	//"p" eh responsavel por percorrer a lista
	p = ponteiroEncadeado;
	 while(p->proximo != NULL){
	 	//guarda a posicao atual do p
	 	aux = p;
	 	//guarda a proxima posicao do p tornando o aux sua posicao anterior]
	 	p = p->proximo;		  
	 }
	//garante que a ultima posicao seja nula, nao exista
	aux->proximo = NULL;
}

void removeNodeN(Dados *&ponteiroEncadeado, int posicao){
		
		Dados *p = new Dados;
		
		p = ponteiroEncadeado;
		
		int cont = 0;
		while(cont <= posicao){
			if(cont == posicao - 1){
				
				Dados *aux = new Dados();
				
				aux = p->proximo;
				 
				p->proximo = aux->proximo;
				
				 free(aux); 
			}			
			cont++;
			p = p->proximo;
		}
		
	
}

string RetornaNome(Dados *&ponteiroEncadeado, int id){
	string nome = "nao encontrado!";
	Dados *p = ponteiroEncadeado;
	
	while(p != NULL){
		
		if(p->id == id){
			nome = p->nome;
			
			return nome;
		}	
		p = p->proximo;
	}
	return nome;
}

int main(){

	//ponteiro criado para apontar para proxima posicao
	//criado tambem para guardar um valor inicial caso a lista esteja vazia
	Dados *ponteiroEncadeado = new Dados;
	ponteiroEncadeado->nome = "";
	ponteiroEncadeado->id = 0;
	ponteiroEncadeado->proximo = NULL;
	
	cout << "tamanho lista:"
			 << 	retornaTamanho(ponteiroEncadeado) 
			 << endl;
			 
	int funcaoEscolhida = 1;
	while(funcaoEscolhida > 0 && funcaoEscolhida < 10){	
		imprimeLista(ponteiroEncadeado);
		cout << "operacoes\n";
		cout << "1 - inserçao de um node no inicio da lista\n";
		cout << "2 - inserçao de um node no final da lista\n";
		cout << "3 - inserçao de um node na posicao N da lista\n";
		cout << "4 - retirar um node do inicio da lista\n";
		cout << "5 - retirar um node do fim da lista\n";
		cout << "6 - retirar um node da posicao N da lista\n";
		cout << "7 - procurar nome pelo id\n";
		cout << "8 - imprimir lista\n";
		cout << "9 - sair das operacoes\n";
		cout << "Escolha a opcao e tecle ENTER:";
		cin >> funcaoEscolhida;
		
	    limpaTela();	
		string nome;
		int id;
		int posicao;
		
		switch(funcaoEscolhida){
			case 1:
				cout << "Opcao 1 - Inserçao de um node no inicio da lista\n";
				cout << "nome:";
				cin.ignore();
				getline(cin, nome);
				cout << "Id:";
				cin >> id;				
				cout << "\n";
				addComecoEncadeado(ponteiroEncadeado, nome, id);
				break;
			case 2:
				cout << "Opcao 2 - Inserçao de um node no fim da lista\n";
				cout << "nome:";
				cin.ignore();
				getline(cin, nome);
				cout << "Id:";
				cin >> id;
				cout << "\n";
				if(retornaTamanho(ponteiroEncadeado) == 0){
					addComecoEncadeado(ponteiroEncadeado, nome, id);
				}else{
					addFimEncadeado(ponteiroEncadeado, nome ,id);
				}
				 
				break;
			case 3:
				cout << "Opcao 3 - Inserçao de um node na posicao N da lista\n";
				cout << "nome:";
				cin.ignore();
				getline(cin, nome);
				cout << "Id:";
				cin >> id;
				cout << "Posicao:";
				cin >> posicao;
				cout << "\n";
				if(posicao == 0){
					addComecoEncadeado(ponteiroEncadeado, nome, id);
				}else if(posicao == retornaTamanho(ponteiroEncadeado) - 1){
					addFimEncadeado(ponteiroEncadeado, nome ,id);
				}else{
					addPosicaoN(ponteiroEncadeado, nome, id, posicao);
				}				
				break;
			case 4:
				cout << "Opcao 4 - Retirar um node no inicio da lista\n";
				cout << "\n";
				
				if(retornaTamanho(ponteiroEncadeado) == 0){
					cout << "Lista vazia!\n";
				}else{
					removeComecoEncadeado(ponteiroEncadeado);
				}
				
				break;
			case 5:
				cout << "Opcao 5  - Retirar um node do fim da lista\n";
				
				cout << "\n";
				if(retornaTamanho(ponteiroEncadeado) == 0){
					cout << "lista vazia";
				}else{
				removeFim(ponteiroEncadeado);
				}
				break;
			case 6:
				cout << "Opcao 6  - Retirar um node da posicao N da lista\n";
				cout << "posicao:";
				cin >> posicao;
				cout << "\n";
				if(posicao == 0){
					removeComecoEncadeado(ponteiroEncadeado);
				}else if(posicao == retornaTamanho(ponteiroEncadeado) - 1){
					removeFim(ponteiroEncadeado);
				}else{
					removeNodeN(ponteiroEncadeado, posicao);
				}
				break;
			case 7:
				cout << "Opcao 7 - Procurar nome pelo ID\n";
				cout << "DIGITE O ID :";
				cin >> id;
				cout << "'O nome do usuario do id " 
						<< id << " eh: " << RetornaNome(ponteiroEncadeado, id); 
				break;
			case 8:
				cout << "Opcao 8  - Imprimir lista\n";				
				imprimeLista(ponteiroEncadeado);
				cout << "\n";
				break;
			case 9:
				cout << "Opcao 9 - Sair das operaçoes";
				return 0;
				break;
			default:
				cout << "nenhuma das opcoes escolhidas, morra" << endl;
				main();
				break;
		}
	  
	}
	return 0;
}