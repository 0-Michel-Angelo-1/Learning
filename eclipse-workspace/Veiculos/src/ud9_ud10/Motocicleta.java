package ud9_ud10;

public class Motocicleta extends Veiculo {
	
	
	
	void status() {
		if(isLigado() == true) {
			System.out.println("Motocicleta Ligada");
		}else {
			System.out.println("Motocicleta Desligada");
		}
	}

	//@Override
	public void ligar() {
		ligado = true;
	}

	//@Override
	public void desligar() {
		ligado = false;
	}

	//@Override
	public boolean isLigado() {
		if(ligado == true) {
			return true;
		}else {
			return false;			
		}
	}

}
