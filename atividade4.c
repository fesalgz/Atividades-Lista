#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Declaracao da variavel e zerando
	float vlr_custo, vlr_cons, imp = 0;
	
	//Prints e scans
	printf("Insira o valor de custo de fabrica do carro: R$");
	scanf("%f", &vlr_custo);
	printf("\nCalculando o valor do consumidor...\n");
	
	//calculando o valor do consumidor
	imp = (vlr_custo * 0.45) + vlr_custo;
	vlr_cons = (vlr_custo * 0.25) + imp;
	 
	//print do valor
	printf("\nO valor do carro pro consumidor eh: R$%.2f\n", vlr_cons);
	
	system("pause");
	return 0;
}