package ud9_ud10;

public class Automovel extends Veiculo {
	void status() {
		if(isLigado() == true) {
			System.out.println("Automovel Ligado");
		}else {
			System.out.println("Automovel Desligado");
		}
	}

	@Override
	public void ligar() {
		ligado = true;
	}

	@Override
	public void desligar() {
		ligado = false;
	}

	@Override
	public boolean isLigado() {
		if(ligado == true) {
			return true;
		}else {
			return false;
		}
	}

}
