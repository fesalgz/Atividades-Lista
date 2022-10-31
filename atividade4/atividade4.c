#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Declaracao da variavel e zerando
	float vlr_custo, vlr_cons, imp = 0;
	int i = 0;
	
	//Prints e scans
	printf("Insira o valor de custo de fabrica do carro: R$");
	scanf("%f", &vlr_custo);
	
	//timer deixando uma frase na tela por alguns segundos
	for (i=1 ; i<15 ; i++) {
		printf("\nCalculando o valor do consumidor...\n");
		system("cls");
	}
	
	//calculando o valor do consumidor
	imp = (vlr_custo * 0.45) + vlr_custo;
	vlr_cons = (vlr_custo * 0.25) + imp;
	 
	//print do valor
	printf("\nO valor do carro pro consumidor eh: R$%.2f\n\n", vlr_cons);
	
	system("pause");
	return 0;
}