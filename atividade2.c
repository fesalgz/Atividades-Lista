#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declaracao das variaveis.
	int valores[3], soma;
	
	//Scanf dos valores.
	printf("Digite o valor A:\n");
	scanf("%i", &valores[0]);
	printf("\nDigite o valor B:\n");
	scanf("%i", &valores[1]);
	printf("\nDigite o valor C:\n");
	scanf("%i", &valores[2]);
	
	//Soma do valor A com o B.
	soma = valores[0] + valores[1];
	
	//if para verificar se eh maior, menor ou igual.
	if(soma < valores[2]) {
		printf("\nA soma de A e B: %i", soma);
		printf(". Eh menor que o valor C: %i", valores[2]);
	} if(soma > valores[2]){
		printf("\nA soma de A e B: %i", soma);
		printf(". Eh maior que o valor C: %i", valores[2]);
	} else {
		printf("\nA soma de A e B: %i", soma);
		printf(". Eh igual ao valor C: %i \n", valores[2]);
	}
	
	//Comando para pausar o CMD para ele nao fechar sozinho.
	system("pause");
	
	return 0;
}