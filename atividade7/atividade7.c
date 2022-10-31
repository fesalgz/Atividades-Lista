#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//declaracao das variaveis
	int total_car = 0;
	int salario = 3000;
	float vlr_total, comissao, salario_total, vlr_venda = 0;
	char nome_fun[50];
	
	//print e scan do nome do funcionario
	printf("\nCompanhia de Carros: Joao Honesto\n\n\n");
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome_fun);
	
	//print e scan da quantidade de carros vendidos
	printf("\nDigite a quantia de carros vendidos: ");
	scanf("%d", &total_car);
	comissao = total_car * 500;
	
	//print e scan do valor total de vendas
	printf("\nDigite o valor total das vendas: R$ ");
	scanf("%f", &vlr_total);
 	vlr_venda = vlr_total * 0.05;
 	
 	//conta do valor do salario total
 	salario_total = salario + comissao + vlr_venda;
 	
 	//print do salario total
 	printf("\nO valor do salario de: %s eh de: R$ %.2f \n", nome_fun, salario_total);
 	
	return system("pause");
}