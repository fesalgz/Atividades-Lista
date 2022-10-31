#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//declaracao das variaveis
	char nome[50];
	int diarias = 0;
	float vlr_conta, vlr_diaria = 0;
	
	//print e scan do nome e numero de diarias
	printf("\nDigite o nome da pessoa: ");
	scanf("%s", &nome);
	printf("\nDigite o numero de diarias: ");
	scanf("%i", &diarias);
	
	//calculo do valor da diaria
	vlr_diaria = diarias * 300;
	
	//if pra logica da taxa de servico
	if(diarias < 15) {
		vlr_conta = vlr_diaria + 20;
	} else if(diarias == 15){
			vlr_conta = vlr_diaria + 14;
		} else{
			vlr_conta = vlr_diaria + 12;
		}
	
	//print do valor total da conta	
	printf("\nO valor da conta da(o): %s eh de R$ %.2f\n", nome, vlr_conta);
	
	return system("pause");
}