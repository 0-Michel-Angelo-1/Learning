
#include <stdlib.h>
#include <conio.h>
#define ciano "\033[36m"	 
#define amarelo "\033[33m"	
#define branco "\033[0m"
//definindo cores utilizadas na função
// calculando a média anual de um aluno 
int dnv(){
	
	int s;
	// esta função serve como um menu de escolhas para o usuario
	printf(ciano"\n Digite 0 p/calcular novamente OU");
	printf("\nDigite Qualquer tecla para sair, menos\n a de desligar o celular:");
			scanf("%f", &s);
			
	if(s==0){
		main();
	}
	else{
		return 0;		
  	}
}

int main(){
	float a, b, c, d, ma, ip, s, g, so;
//função principal
	do
	{
		printf(amarelo"\t\t->Calculo da média anual<-\n");
      	printf("OBS: Clique em 'enter' ao terminar de digitar para enviar os valores.\n\n");
      	
		printf("\tDigite suas notas abaixo:\n");
		do
		{
			printf(branco"\n1°Bimestre:");
				scanf("%f", &a);
				
				if (a > 10 || a < 0){
					printf("Coloque uma nota entre 0 e 10!\n");
				}
				else{
				printf("\n");
				}
				/*este laço de repetição garante que nenhum valor fora do permitido(de 0 a 10)seja lido.*/
		} while (a > 10 || a < 0);
		
		do
		{
			printf("\n2°Bimestre:");
				scanf("%f", &b);
				
					if (b > 10 || b < 0){
					printf("Coloque uma nota entre 0 e 10!\n");
				}
				else{
				printf("\n");
				}
				
		} while (b > 10 || b < 0);
		
		do
		{
			printf("\n3°Bimestre:");
				scanf("%f", &c);
				
					if (c > 10 || c < 0){
					printf("Coloque uma nota entre 0 e 10!\n");
				}
				else{
				printf("\n");
				}
				
		} while (c > 10 || c < 0);
		
		do
		{
			printf("\n4°Bimestre:");
				scanf("%f", &d);
				
					if (d > 10 || d < 0){
					printf("Coloque uma nota entre 0 e 10!\n");
				}
				else{
				printf("\n");
				}
				
		} while (d > 10 || d < 0);
				ma = (a + b + c + d) / 4;

		printf("\t->sua média anual é:%.2f<-\n", ma);

		if (ma >= 7 && ma <= 10)
		{
			printf("\t[PASSASTE]aisim kkkkkk");
		dnv();
		}
			else if (ma <= 7){
			printf("\n[REPROVASTE]ehmole não\n");
			
		}
		else{
			printf("");
			}
			
		if (ma < 7 ){
				so = a + b + c + d;
			ip = 28 - so;
			printf("\n>Você precisa tirar [%.2f]PONTOS na prova final!", ip);
			dnv();
		}
		else
		{
			printf("\n");
		}
		
		return 0;
			
	} while (s == 0);
			return 0;
}
