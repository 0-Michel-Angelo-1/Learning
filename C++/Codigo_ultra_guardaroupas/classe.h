//classe mãe
class Veiculo{
public:
    int tipo;        
    bool ligado;
    void imp();
    string nome;
    void setVelMax(int vm);  
private:
    int velMax;
        
};
//preenche 40 casas com '-'
string linha(40, '-');

void Veiculo::imp(){   
    cout << "nome..........:" << nome << endl;
    cout << "Velocidade Max:" << velMax << endl;
    cout << linha << endl;
}
void Veiculo::setVelMax(int vm){
    velMax = vm;
}  
//classe filha da classe Veiculo
class Moto:public Veiculo{
public:
    
    Moto();
};
//construtor operando
Moto::Moto(){   
    nome = "moto";
    setVelMax(120);  
}

//Classe filha da classe Veiculo
class Carro:public Veiculo{
public:
    
    Carro();
};
//construtor operando
Carro::Carro(){
    nome = "Carro";
    setVelMax(190);
}

class Bicicleta:public Veiculo{
 public:
     
     Bicicleta();
};
Bicicleta::Bicicleta(){
    nome = "Bicicleta";
    setVelMax(50);
}

class Pessoanamoto{
public:
    string nomeP;
    void impP();
    Pessoanamoto();    
};
Pessoanamoto::Pessoanamoto(){
    nomeP = "carlim do grau";
}
void Pessoanamoto::impP(){
    cout << "pessoa na moto:" << nomeP << endl;
}

class Motocabike:public Veiculo,public Pessoanamoto{
};