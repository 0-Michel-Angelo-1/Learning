#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;

void tenteNovamente();

void limpaTela(){
	system("clear");
}
 
string retornaPalavra(){												//sistema de lançar uma palavra
	string palavras[3] = {												 //aleatoria da lista.
										"abacaxi", "maça", "melao"
										};
	int indicePalavra = rand() % 3; //os restos equivalem as posicoes da memoria
	
	return palavras[indicePalavra]; //retorna palavra da vez
}

string palavraMascarada(int tamanhoPalavra, string palavra){
	string palavraComMascara;					//sistema de "mascarar" a palavra da vez
	int cont = 0;
	while(cont < tamanhoPalavra){
		palavraComMascara += "_";
		cont ++;
	}
	return palavraComMascara; //retorna palavra da vez com mascara
}

void status(int tamanhoPalavra, string palavraComMascara, int numMaxTentativas, int tentativas){
	cout << "tamanho da palavra: " << tamanhoPalavra << endl
			<< "Palavra com mascara: " << palavraComMascara
			<< ";  Tentativas restantes: " <<  numMaxTentativas - tentativas << endl;
}
void jogarSozinho(){
	
	string palavra = retornaPalavra(); //recebe o retorno da funçao retornaPalavra
	
	int tamanhoPalavra = palavra.size(); //recebe o tamanho da palavra retornada pela 
																	//funçao 
	
	string palavraComMascara = palavraMascarada(tamanhoPalavra, palavra);
	//A variavel acima mascara a palavra retornada
	
	int tentativas = 0, numMaxTentativas = tamanhoPalavra;
	char letra; 																				//letra arriscada
	int cont = 0; 																				//auxiliar contador
	while(palavra != palavraComMascara && numMaxTentativas - tentativas > 0){
		limpaTela();
		//a funçao status mostra os status do jogo
		status(tamanhoPalavra, palavraComMascara, numMaxTentativas, tentativas);
		
		cout << "Arrisque a letra:";
		cin >> letra;
		for(cont = 0 ; cont < tamanhoPalavra; cont++){
			if(palavra[cont] == letra){										//caso a letra exista na palavra
				palavraComMascara[cont] = palavra[cont];	 //mascarada, vai ser exposta
			}																				//em seu(s) devido(s) espaços
		
		}
		
		tentativas ++;
	}
	 
	if(palavra == palavraComMascara){ 		//checa se a palavra ja foi descoberta
		cout << "voce ganhou, yeeah!" << endl; // e se caso for, mostra que voce ganhou 
		tenteNovamente();	
	}else{
		cout << "iala bixo ruim perdeu" << endl;
		tenteNovamente();		
	}	 
}
 void menuInicial(){
	int opcao = 0;
	
	while(opcao < 1 || opcao > 3){
		limpaTela();
		cout << "JOGO DE PALAVRAS SILVO SANTOR \n";
		cout << "1 - Jogar;\n";
		cout << "2 - Sobre;\n";
		cout << "3 - Sair;\n";
		cout << "Selecione a opcao que deseja e tecle ENTER, jogador-senpai >_<:";
		cin >> opcao;
		
		switch(opcao){
			case 1:
				cout << "Jogo Iniciado!\n";
				jogarSozinho();
				break;
			case 2:
				cout << "Informações sobre o jogo:\n";
				cout << "- - -";
				break;
			case 3:
				cout << "Saindo do jogo - - - \n";
				break;
		}
	}
}

void tenteNovamente(){
	char desejo[3] = "a"; 	//variaveis de referencia para a comparacao abaixo 
	char d[3] = "s";
	char n[3] = "n";
	
	cout << "deseja jogar novamente?<s/n>:  ";
	cin >> desejo;
	if(strncmp(desejo, d, 3) == 0) { 	//checa se "desejo" eh igual a "s"
		jogarSozinho();							//caso o jogar queira jogar novamente
	}else if(strncmp(desejo, n, 3) == 0){
		menuInicial();									//caso o jogdor nao queira mais jogar
	}else{
		cout << "Nenhuma das letras mensionadas!\n"; 
		tenteNovamente(); //caso o jogador tenha errado a letra
	}	

}

int main(){
	srand((unsigned)time(NULL));  	//gera numero aleatorio
	
	menuInicial();
	return 0;
}
 
