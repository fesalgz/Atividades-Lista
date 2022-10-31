#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Declaração das variáveis, e zerando elas
	int a, b, c = 0;

	//Prints e scanf	
	printf("Digite o valor A: \n");
	scanf("%i", &a);
	printf("\nDigite o valor B:\n");
	scanf("%i", &b);
	
	//if para a logica
 	if(a == b){
 		c = a + b; 
	 } else if(a > b) {
		 c = a * b;
	 } else {
		 c = b * a;
	 }
	 
	printf("\nO valor de C eh: %i \n", c);
	
	system("pause");
	
	return 0;
}