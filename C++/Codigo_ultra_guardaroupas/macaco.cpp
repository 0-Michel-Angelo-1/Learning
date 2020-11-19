#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;


string  macaco(){
	string macacos[4] = {"macaco bunda vermelha", "macaco lutador", 
										 "Artict macacos", "macaco tarzan"
										 };
	int  indiceTipo = rand() % 5;
	
	return macacos[indiceTipo];
}

void retornaMacaco(){
	
	char M[1];
	char m[3] = "M";
	cout << "pressione [M] para saber qual macaco voce eh:" << endl;
	cin >> M;
	
	string tipoMacaco = macaco();
	 if(strncmp(M, m, 1) == 0){
	 	cout << "seu tipo de macaco ehhhh: " << tipoMacaco; 
	 }else{
	 	cout << "letra errada seu..." << endl;
	 	retornaMacaco();
	 }
}
int main()
{
	srand((unsigned)time(NULL));
	
	retornaMacaco();  
	return 0;
}
