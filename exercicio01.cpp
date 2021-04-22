#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Prova - N1

UNIFG Piedade 3�Periodo MA;
Disciplina: Estrutura de dados;
Prof.: Joao Paulo;

GRUPO 01:
1- Vinicius Rodrigues Cardoso Silva (202000632);
2- Paloma Corr�a Alves (202000716);
3- Matheus Barros Cris�stomo (202058447);
4- Vinicius Maia Azevedo de Oliveira (202003404).
*/

/*
01. Anualmente � cobrado de propriet�rios de ve�culos automotores o IPVA (Imposto sobre a propriedade de 
ve�culos automotores) em todos os estados do Brasil e o DF, podendo o mesmo ser pago em cota �nica, ou 
geralmente em at� 3 cotas com juros. Sabendo-se que o m�s em que o licenciamento deve ser renovado em um 
estado X � determinado pelo �ltimo n�mero da placa do mesmo, fa�a um programa que, a partir da leitura da 
placa do carro, informe o m�s em que o licenciamento deve ser renovado. Considere uma situa��o hipot�tica em 
que o dono do ve�culo fa�a o pagamento em cota �nica. (Use : Fev � final 0, mar � final 1, ...).
*/

int main(){
	// Declara��o das vari�veis.
	// A placa do carro deve conter 7 elementos (3 letras / 4 numeros -> Base no modelo antigo).
	char placa_letra[3];
	int placa_numero;
	// String para definir, posteriormente, o tamanho da quantidade de n�meros.
	char sPlaca_numero[4];
	int ultimo_num_placa;
	
	// Pede para o usu�rio entrar com as letras da placa.
	printf("Digite as tres letras da placa: ");
	fflush(stdin);
	scanf("%s", placa_letra);

	// Condi��o para delimitar o tamanho de letras na placa.
	while(strlen(placa_letra) > 3 || strlen(placa_letra) <= 2){
		printf("\nPLACA DO CARRO CONTEM SOMENTE 3 LETRAS!!!\n");
		printf("Digite as tres letras da placa: ");
		scanf("%s", placa_letra);
	}
	
	// Pede para o usu�rio entrar com os n�meros da placa.
	printf("Digite os quatro numeros da placa: ");
	fflush(stdin);
	scanf("%d", &placa_numero);	
	
	// Converte um inteiro para string.
	itoa(placa_numero, sPlaca_numero, 10);
	
	// Condi��o para delimitar o tamanho de numeros na placa.
	while(strlen(sPlaca_numero) > 4 || strlen(sPlaca_numero) <= 3){
		printf("\nPLACA DO CARRO CONTEM SOMENTE 4 NUMEROS!!!\n");
		printf("Digite os quatro numeros da placa: ");
		scanf("%d", &placa_numero);
		
		itoa(placa_numero, sPlaca_numero, 10);
	}
	
	// Pega o �ltimo n�mero da placa.
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
