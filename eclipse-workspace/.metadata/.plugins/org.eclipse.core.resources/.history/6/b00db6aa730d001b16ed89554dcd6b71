package ud13_14;

public class ContaCorrente {
	
	private float saldoInicial = 10000; //10 mil reais
	private float dinheiroTotal;
	
	public void sacar(float saque) throws Exception{		
		dinheiroTotal = saldoInicial - saque;
		
		if(saque > dinheiroTotal) throw new Exception("ACABOU O DINHEIRO!!!!!");
		
	}
	
	
	public float getConta() {
		
		return dinheiroTotal;
	}
}
