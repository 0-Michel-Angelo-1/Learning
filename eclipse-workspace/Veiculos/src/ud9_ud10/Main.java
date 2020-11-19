package ud9_ud10;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);   //Permite entrada de dados pelo console
		
		Motocicleta m1 = new Motocicleta();
		Onibus o1 = new Onibus();
		Automovel a1 = new Automovel();
		
		int cont = 1;
		while(cont == 1) {
			
			System.out.println("Status dos veículos:\n");
			m1.status();
			o1.status();
			a1.status();
			
			System.out.println("\n\tOs estados podem ser alterados!\n");
			System.out.println("Motocicleta: Ligar[1] Desligar[2]\n");
			System.out.println("Onibus.....: Ligar[3] Desligar[4]\n");
			System.out.println("Automovel..: Ligar[5] Desligar[6]\n");
			int estado = input.nextInt();
			
			switch(estado) {
				case 1:
					m1.ligar();
					break;
				case 2:
					m1.desligar();
					break;
				case 3:
					o1.ligar();
					break;
				case 4:
					o1.desligar();
					break;				
				case 5:
					a1.ligar();
					break;
				case 6:
					a1.desligar();
					break;
				default:
					System.out.println("OPÇÃO NÃO ACEITÁVEL, TENTE NOVAMENTE!\n");
					break;
			}
		}
	}

}
