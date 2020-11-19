void limpaTela(){
    system("clear");
}
struct pessoa{
    string nome;
    int rg;
};
void imprimeListaSequencial(pessoa *ponteiroSequencial, int tamanhoLista){
   
     int cont;
    for(cont = 0; cont < tamanhoLista; cont++){
        cout << cont << "-" << ponteiroSequencial[cont].nome << "," << ponteiroSequencial[cont].rg << endl;
    }
    cout << "\n";
}
//adiciona um node no começo da lista
void addComecoSequencial(pessoa *&ponteiroSequencial, int *tamanhoLista, string nome, int rg){
   
     if(tamanhoLista == 0){
        //cria uma lista caso haja nenhuma
        pessoa *novalistaSequencial = new pessoa[1];
        //adiciona um node no comeco da lista
        novalistaSequencial[0].nome = nome;
        novalistaSequencial[0].rg = rg;
        
        //atualiza a lista
        ponteiroSequencial = novalistaSequencial;      
    }else{
    	//caso a lista ja exista, cria outra    
        pessoa *novalistaSequencial = new pessoa[*tamanhoLista + 1];
    	//adiciona um node no comeco da lista
  	  novalistaSequencial[0].nome = nome;
   	 novalistaSequencial[0].rg = rg;
    	
    int cont;
    //move os nodes para o lado, abrindo espaço para a adiçao  de  um node no comeco da lista
    for(cont = 0; cont < *tamanhoLista; cont ++){
       novalistaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
       novalistaSequencial[cont + 1].rg = ponteiroSequencial[cont].rg;
    }
    	//atualiza a lista
    	ponteiroSequencial = novalistaSequencial;    
    }
    	//aumenta  o tamanho da lista 
    	*tamanhoLista = *tamanhoLista + 1;
}

void addFimSequencial(pessoa *&ponteiroSequencial, int *
tamanhoLista, string nome, int rg){
    //cria nova lista
    pessoa *novalistaSequencial = new pessoa[*tamanhoLista + 1];
   //adiciona um node no fim da lista sequencial 
   novalistaSequencial[*tamanhoLista].nome = nome;
   novalistaSequencial[*tamanhoLista].rg = rg;
    
    int cont;
   //adiciona um node em cada "casa" 
    for(cont = 0; cont < *tamanhoLista; cont++){
       novalistaSequencial[cont].nome = ponteiroSequencial[cont].nome;
       novalistaSequencial[cont].rg = ponteiroSequencial[cont].rg;
         }
        //atualiza a lista sequencial
        ponteiroSequencial = novalistaSequencial;
        //aumenta o tamanho da lista
        *tamanhoLista = *tamanhoLista + 1;        
    }
 
void addPosicaoN(pessoa *&ponteiroSequencial, int *tamanhoLista, string nome, int rg, int posicao){
    //cria nova lista sequencial
    pessoa *novalistaSequencial = new pessoa[*tamanhoLista + 1];
    
   int cont;
   //organiza os nodes ate antes da posicao escolhida
  for(cont = 0; cont < posicao; cont++){
        novalistaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novalistaSequencial[cont].rg = ponteiroSequencial[cont].rg;        
    }
    //adiciona o novo node na posicao desejada
    novalistaSequencial[posicao].nome = nome;
    novalistaSequencial[posicao].rg = rg;
  //adiciona o resto dos nodes nas posicoes pos posicao desejada  
  for(cont = posicao + 1; cont < *tamanhoLista + 1; cont++){
    novalistaSequencial[cont].nome = ponteiroSequencial[cont-1].nome;  
    novalistaSequencial[cont].rg = ponteiroSequencial[cont-1].rg;       
     }
    //atualiza a lista sequencial
    ponteiroSequencial = novalistaSequencial;
    //aumenta o tamanho da lista
    *tamanhoLista = *tamanhoLista + 1;
}

void RetiraComeco(pessoa *&ponteiroSequencial, int *tamanhoLista, string nome, int rg ){
	   //cria uma lista menor para retirada de um node   
        pessoa *novalistaSequencial = new pessoa[*tamanhoLista - 1];
    	
    int cont;
    //move os nodes para o lado, fechando espaço de  um node no comeco da lista
    for(cont = 0; cont < *tamanhoLista; cont ++){
       novalistaSequencial[cont - 1].nome = ponteiroSequencial[cont].nome;
       novalistaSequencial[cont - 1].rg = ponteiroSequencial[cont].rg;
 
	 }
	 	//atualiza a lista
		ponteiroSequencial = novalistaSequencial;
		//diminui o tamanho da lista
		*tamanhoLista = *tamanhoLista - 1;

}

void RetiraFinal(pessoa *&ponteiroSequencial, int *tamanhoLista, string nome, int rg){    
	 //cria nova lista com tamanho menor
    pessoa *novalistaSequencial = new pessoa[*tamanhoLista - 1];
    
    int cont;
   //adiciona um node em cada "casa" 
    for(cont = 0; cont <= *tamanhoLista; cont++){
       novalistaSequencial[cont].nome = ponteiroSequencial[cont].nome;
       novalistaSequencial[cont].rg = ponteiroSequencial[cont].rg;
         }
        //atualiza a lista sequencial
        ponteiroSequencial = novalistaSequencial;
        //diminui o tamanho da lista
        *tamanhoLista = *tamanhoLista - 1;        
   	
}

void RetiraPosicaoN(pessoa *&ponteiroSequencial, int *tamanhoLista, string nome, int rg, int posicao){
	//diminui o tamanho da lista
	pessoa *novalistaSequencial = new pessoa[*tamanhoLista - 1];
    
  int cont;
  //mantem os dados antes da posicao alterada
  for(cont = 0; cont < posicao; cont ++){
   	novalistaSequencial[cont].nome = ponteiroSequencial[cont].nome;
   	novalistaSequencial[cont].rg = ponteiroSequencial[cont].rg;
  }
   /*adiciona o resto dos nodes nas posicoes vazias...
      sobrescreve os dados da posicao com os dados a frente dela
    */
  for(cont = posicao; cont < *tamanhoLista - 1; cont++){
    novalistaSequencial[cont].nome = ponteiroSequencial[cont + 1].nome;     	novalistaSequencial[cont].rg = ponteiroSequencial[cont + 1].rg;       
     }
     
    //atualiza a lista sequencial
    ponteiroSequencial = novalistaSequencial;
    //diminui o tamanho da lista
    *tamanhoLista = *tamanhoLista - 1;

}

string ProcuraRg(pessoa *&ponteiroSequencial, int *tamanhoLista,  int rg){
 	
 	string nome = "nao encontrado";
 	
 	int cont;
 	for(cont = 0; cont < *tamanhoLista; cont++){
 		if(ponteiroSequencial[cont].rg == rg){
 			nome = ponteiroSequencial[cont].nome;
 		}
 	}
 	return nome;	
}
