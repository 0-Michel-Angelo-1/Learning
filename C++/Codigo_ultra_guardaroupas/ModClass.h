class LinguagemAmiga;

class Linguagem{
	friend void classeAmiga(Linguagem *);  //funçao que terah acesso a funçoes publicas
public:															//da classe Liguagem
	setNome(string nome);
	getNome(string nome);
private:
	string nome;
};

void Linguagem::setNome(string nome){
	this->nome = nome;
}
string Linguagem::getNome(string nome){
	return this->nome;
}

void classeAmiga{
	cout <<"te amo amiga!" << endl;
}

class LinguagemAmiga{
	friend class Liguagem;
public:
	
private:
	void mostrarSms(){
		cout << "ola linguagem programated" << endl;
	}
};