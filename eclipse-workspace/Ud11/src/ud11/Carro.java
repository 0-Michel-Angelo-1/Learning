package ud11;

public class Carro implements Veiculo{
	private float vel = 0;
	
	
	public float getVel() {
		return vel;
	}
	
	public float acelerar() {

		return vel++;
	}

}
