package ud17_18;

public class Carro {
	double minimaBat = 12; //Tensão minima para andar 1km
	double minimoComb = 1; //Litro de comustível minimo 
	double tensao;
	double combustivel;
	
	void ligar() throws Exception{
		if(tensao < minimaBat || combustivel < minimoComb) throw new Exception("");
		
		if(tensao >= minimaBat && combustivel >= minimoComb) {
			System.out.println("O Carro está ligado!!");
		}
	}
	void status(){
		System.out.println("A tensão da bateria do carro é em Volts: " + tensao 
							+ "\n A quantidade de combustivel disponível em Litros é: " + combustivel);
	}
}
