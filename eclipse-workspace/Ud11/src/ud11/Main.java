package ud11;

public class Main {

	public static void main(String[] args) {
		// Este programa tem o intuito de demonstrar o funcionamento de interface de forma simples.
		Veiculo v = new Carro();
		
		
		System.out.println("A aceleração do veiculo enquanto se locomove por 10 segundos cresce exponencialmente:");
		while(v.getVel() < 10) {
			
			System.out.println(v.acelerar() + ".....m/s");
			try { Thread.sleep (1000); } catch (InterruptedException ex) {}
		}
		
		
	}

}
