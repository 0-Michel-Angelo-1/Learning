class Pessoa{
public:
	string nome;
	int getId();
	void setId(int Id);
	Pessoa(int id);
	//˜Pessoa();
	void imprimeId();
private:
	int Id;
	int id;
};

Pessoa::Pessoa(int id){
	 if(id == 1){
	 	cout << "coe mlk cai po pau eu sou o usuario o noooooleum" << endl;
	 }
}

void Pessoa::imprimeId(){
	cout << "id: " << Id << endl;
}

int Pessoa::getId(){
	return id;
}

void Pessoa::setId(int Id){
	Id =id;
}
/*
//bixo, era pra ser um destrutor, porem...NUM DA NUM FUNCIONA AQUI 
void Pessoa::˜Pessoa(){
	cout << "objeto Destruido!" << endl;
}*/