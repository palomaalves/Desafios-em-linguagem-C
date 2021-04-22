#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Prova - N1

UNIFG Piedade 3°Periodo MA;
Disciplina: Estrutura de dados;
Prof.: Joao Paulo;

GRUPO 01:
1- Vinicius Rodrigues Cardoso Silva (202000632);
2- Paloma Corrêa Alves (202000716);
3- Matheus Barros Crisóstomo (202058447);
4- Vinicius Maia Azevedo de Oliveira (202003404).
*/

/*
01. Anualmente é cobrado de proprietários de veículos automotores o IPVA (Imposto sobre a propriedade de 
veículos automotores) em todos os estados do Brasil e o DF, podendo o mesmo ser pago em cota única, ou 
geralmente em até 3 cotas com juros. Sabendo-se que o mês em que o licenciamento deve ser renovado em um 
estado X é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da 
placa do carro, informe o mês em que o licenciamento deve ser renovado. Considere uma situação hipotética em 
que o dono do veículo faça o pagamento em cota única. (Use : Fev – final 0, mar – final 1, ...).
*/

int main(){
	// Declaração das variáveis.
	// A placa do carro deve conter 7 elementos (3 letras / 4 numeros -> Base no modelo antigo).
	char placa_letra[3];
	int placa_numero;
	// String para definir, posteriormente, o tamanho da quantidade de números.
	char sPlaca_numero[4];
	int ultimo_num_placa;
	
	// Pede para o usuário entrar com as letras da placa.
	printf("Digite as tres letras da placa: ");
	fflush(stdin);
	scanf("%s", placa_letra);

	// Condição para delimitar o tamanho de letras na placa.
	while(strlen(placa_letra) > 3 || strlen(placa_letra) <= 2){
		printf("\nPLACA DO CARRO CONTEM SOMENTE 3 LETRAS!!!\n");
		printf("Digite as tres letras da placa: ");
		scanf("%s", placa_letra);
	}
	
	// Pede para o usuário entrar com os números da placa.
	printf("Digite os quatro numeros da placa: ");
	fflush(stdin);
	scanf("%d", &placa_numero);	
	
	// Converte um inteiro para string.
	itoa(placa_numero, sPlaca_numero, 10);
	
	// Condição para delimitar o tamanho de numeros na placa.
	while(strlen(sPlaca_numero) > 4 || strlen(sPlaca_numero) <= 3){
		printf("\nPLACA DO CARRO CONTEM SOMENTE 4 NUMEROS!!!\n");
		printf("Digite os quatro numeros da placa: ");
		scanf("%d", &placa_numero);
		
		itoa(placa_numero, sPlaca_numero, 10);
	}
	
	// Pega o último número da placa.
	ultimo_num_placa = placa_numero%10;
	
	switch(ultimo_num_placa){
		case 0:
			printf("\nPAGAMENTO EM FEVEREIRO\n");
		break;
			
		case 1:
			printf("\nPAGAMENTO EM MARCO\n");
		break;
		
		case 2:
			printf("\nPAGAMENTO EM ABRIL\n");
		break;
		
		case 3:
			printf("\nPAGAMENTO EM MAIO\n");
		break;

		case 4:
			printf("\nPAGAMENTO EM JUNHO\n");
		break;

		case 5:
			printf("\nPAGAMENTO EM JULHO\n");	
		break;

		case 6:
			printf("\nPAGAMENTO EM AGOSTO\n");	
		break;

		case 7:
			printf("\nPAGAMENTO EM SETEMBRO\n");
		break;

		case 8:
			printf("\nPAGAMENTO EM OUTUBRO\n");
		break;

		case 9:
			printf("\nPAGAMENTO EM NOVEMBRO\n");
		break;
	}
	
	return 0;
}
