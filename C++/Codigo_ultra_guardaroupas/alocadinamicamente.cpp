#include<iostream>
#include<new>
using namespace std;

int main(int argc, char *argv[])
{
	int *aloca_aluno;
	int quantidadedealunos;
	int i;
	cout << "quantos alunos quer cadastrar?";
	cin >> quantidadedealunos;
	
	aloca_aluno = new int[quantidadedealunos];
	
	for(i = 0; i <= quantidadedealunos; i++){
	   aloca_aluno[quantidadedealunos] = i;
	     cout << aloca_aluno[quantidadedealunos];
	}
	return 0;
}