package ud17_18;
import java.util.Scanner;

public class Main { 
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Carro c = new Carro();
	try {
		
		System.out.println("Qual o nivel de tensão em volts da bateria do seu carro?");
		c.tensao = input.nextDouble();
		System.out.println("Qual o nivel de combustivel em litros que seu carro tem?");
		c.combustivel = input.nextDouble();
		
		c.ligar();
	}catch(Exception e) {; 
		System.out.println("Carro desligado! está sem bateria ou combustivel");
	}
	finally {
		System.out.println("\n A Tensão da bateria do carro é em Volts....: " + c.tensao +
							"\n O nivel em Litros de combustivel do carro é: " + c.combustivel);
		
		System.out.println("\nOs niveis DESEJADOS de bateria e combustivel para o carro ligar \n"
							+ "são 12V e 1L, Respectivamente.");
	}
	}

}
