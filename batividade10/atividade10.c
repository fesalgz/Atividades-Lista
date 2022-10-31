#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//declaracao das variaveis
	char nome[50], sexo[10], profissao[50], rua[100], bairro[100], cidade[100], estado[50];
	int idade, telefone, cep = 0;
	float peso, altura = 0;
	
	//print e scan das variaveis
	printf("\nDigite o nome da pessoa: ");
	gets(nome);
	printf("Digite a idade da pessoa: ");
	scanf("%i", &idade);
	printf("Digite o sexo da pessoa: ");
	scanf("%s", sexo);
	printf("Digite o peso da pessoa: ");
	scanf("%f", &peso);
	printf("Digite a altura da pessoa: ");
	scanf("%f", &altura);
	
	//limpando o buffer, se n buga tudo
	fflush(stdin);
	
	//print e scan do resto das variaveis
	printf("Digite a profissao da pessoa: ");
	gets(profissao);
	printf("Digite a rua da pessoa: ");
	gets(rua);
	printf("Digite o bairro da pessoa: ");
	gets(bairro);
	printf("Digite a cidade da pessoa: ");
	gets(cidade);
	printf("Digite o estado da pessoa: ");
	gets(estado);
	printf("Digite o CEP da pessoa: ");
	scanf("%i", &cep);
	printf("Digite o telefone da pessoa: ");
	scanf("%d", &telefone);
	
	//cleanando o cmd
	system("cls");
	
	//printando a ficha da pessoa
	printf("\n\t\tFicha de: %s\n\n", nome);
	
	printf("Nome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nSexo: %s", sexo);
	printf("\nPeso: %.1f", peso);
	printf("\nAltura: %.2f", altura);
	printf("\nProfissao: %s", profissao);
	printf("\nEndereco: %s, %s, %s - %s.", rua, bairro, cidade, estado);
	printf("\nCEP: %i", cep);
	printf("\nTelefone: %d\n", telefone);

	
	system("pause");
	return 0;
}