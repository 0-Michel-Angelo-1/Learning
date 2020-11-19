#include <iostream>
using namespace std;
#include "class.h"

int main(){
	//criando objeto pessoa
	Pessoa *p1 = new Pessoa(1);
	 
	//instancia funcao que imprime o id da pessoa 
	p1->imprimeId();
   return 0;
}