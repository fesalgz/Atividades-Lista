#include <stdio.h>
#include <stdlib.h>

int main()
{
	int qtdhamb, qtdchesse, qtdfritas, qtdrefri, qtdmilk = 0;
	float preco[5] = {3.50, 4.50, 5.00, 1.50, 2.80};
	float v_total[5];
	
	printf("\nCardapio do Mona's Burguer\n\n" );
	printf("Hamburguer R$3,50\n");
	printf("Digite a quantidade de hamburguer que voce vai comprar:\n");
	scanf("%i", &qtdhamb); 
	
	v_total[0] = qtdhamb * preco[0];
	
	printf("\nChesseburguer R$4,50\n");
	printf("Digite a quantidade de chessseburguer que voce vai comprar:\n");
	scanf("%i", &qtdchesse); 
	
	v_total[1] = (qtdchesse * preco[1]) + v_total[0];
	
	printf("\nBatata Frita R$ 5,00\n");
	printf("Digite a quantidade de batata frita que voce vai comprar:\n");
	scanf("%i", &qtdfritas); 
	
	v_total[2] = (qtdfritas * preco[2]) + v_total[1];
	
	printf("\nRefrigerante R$ 1,50\n");
	printf("Digite a quantidade de refrigerante que voce vai comprar:\n");
	scanf("%i", &qtdrefri); 
	
	v_total[3] = (qtdrefri * preco[3]) + v_total[2];
	
	printf("\nMilk-shake R$ 2,80\n");
	printf("Digite a quantidade de milk-shake que voce vai comprar:\n");
	scanf("%i", &qtdmilk); 
	
	v_total[4] = (qtdmilk * preco[4]) + v_total[3];
	
	printf("\n\nO valor total da conta eh: %.2f", v_total[4]);
	

	return 0;
}