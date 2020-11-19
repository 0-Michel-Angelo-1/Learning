package ud20_21;

public class Main {

	public static void main(String[] args) {
		float[] array_notas = new float[] {5, 8, 9, 9};
		
		int i;
		float media = 0;
		float soma = 0;
		
		for(i = 0; i < array_notas.length; i++) {
			soma += array_notas[i];
			media = soma/4;
		}
			
		System.out.println("A média das notas é: " + media);
	}

}
