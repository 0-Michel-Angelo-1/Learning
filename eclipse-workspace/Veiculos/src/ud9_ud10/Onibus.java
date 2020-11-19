package ud9_ud10;

public class Onibus extends Veiculo{
	void status() {
		if(isLigado() == true) {
			System.out.println("Onibus Ligado");
		}else {
			System.out.println("Onibus Desligado");
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
