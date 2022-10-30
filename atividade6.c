#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int opcao, i = 0;
	float conv, conv2, conv3, valor = 0;


	
	printf("\tSistema de conversao!\n\n");
	printf("\tSelecione a opcao a seguir:\n");
	printf("\t1 - Franco Franceses para Dolares Canadenses.\n");
	printf("\t2 - Dolares Americanos para Coroas suecas e Franco Franceses.\n");
	printf("\t3 - Dracmas Gregos para Libras Inglesas.\n");
	printf("\t4 - Dolares Canadenses para Dolares Americanos e Marcos Alemaes.\n\n\t");
	scanf("%i", &opcao);

	switch(opcao)
	{
	case 1:
		printf("Quantos FRF voce quer converter: FRF ");
		scanf("%f", &valor);
		conv = 0.2155 * valor;
		printf("\nC$ %.2f\n", conv);
		break;
	case 2:
		printf("Quantos US$ voce quer converter: US$ ");
		scanf("%f", &valor);
		conv = valor * 1.06;
		conv2= conv * 0.2155;
		conv3 = conv * 0.2425;
		
		printf("\nFRF %.2f\n", conv2);
		printf("SEK %.2f\n", conv3);
		break;
	case 3:
		printf("Quantos Dracmas voce quer converter: Dracmas ");
		scanf("%f", &valor);
		
		conv = valor * 0.0295;
		conv2 = conv * 1.84;
		
		printf("\nLibras Inglesas %.2f\n", conv2);
		break;
	case 4:
		printf("Quantos C$ voce quer converter: C$ ");
		scanf("%f", &valor);
		
		conv = valor * 0.9433;
		conv2 =  valor * 0.4320;
		
		printf("\nUS$ %.2f\n", conv);
		printf("\nDM %.2f\n", conv2);
		break;
	default:
		for (i=1 ; i<15 ; i++) {
		printf("\nInsira uma opcao valida!!!\n\n");
		system("cls"); }
		return main(); 
		break;
	}

	return 0;
}