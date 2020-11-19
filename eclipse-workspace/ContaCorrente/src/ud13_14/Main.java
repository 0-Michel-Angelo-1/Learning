package ud13_14;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		try (Scanner input = new Scanner(System.in)) {
			ContaCorrente c = new ContaCorrente();
			try {
				
				
					System.out.println("BEM VINDO AO BANCO 'Betoneira'!!!");
				
					System.out.println("Nesse banco você só irá sacar!");
					System.out.println("QUANTO DESEJA SACAR?");
					float saque = input.nextFloat();
				
					c.sacar(saque);
			
					System.out.println("Seu saldo atual é : "+ c.getConta()); 
			}catch(Exception e) {
				System.out.println("Seu saldo atual é : 0 / ou o dinheiro solicitado para saque \n é maior que o permitido"); 
			}
			
		}
	}
}


