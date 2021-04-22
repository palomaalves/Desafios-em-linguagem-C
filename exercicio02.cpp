#include <stdio.h>
#include <stdlib.h>

#define MAX 10
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
02. Os alunos de Engenharia El�trica da UNIFG foram contratados por uma empresa X que fornece energia 
el�trica para uma cidade Y do estado de Pernambuco. A empresa de fornecimento de energia el�trica faz a leitura 
mensal dos medidores de consumo. Para cada consumidor, s�o digitados os seguintes dados:
� n�mero do consumidor;
� quantidade de kWh consumidos durante o m�s;
� tipo (c�digo) do consumidor:
1- residencial, pre�o em reais por kWh = 0,1
2- comercial, pre�o em reais por kWh = 0,4
3- industrial, pre�o em reais por kWh = 0,8
Os dados devem ser lidos at� que seja encontrado o consumidor com n�mero 0 (zero). Fa�a um programa que 
calcule e imprima:
a) O custo total para cada consumidor;
b) O total de consumo para os tr�s tipos de consumidor;
c) A m�dia de consumo dos tipos 1 e 2;
d) m�dia do consumo dos tipos 1 e 3 ;
*/


typedef struct{
	int numero;
	float consumo;
	
}Consumidor;

// Fun��o que retorna o n�mero do consumidor.

int numero_consumidor(){
	
	Consumidor consumidor;
	
	// Pede para o usu�rio inserir seu n�mero.
	printf("\nDigite 0 para finalizar.\n");
	printf("\nDigite seu numero: ");
	fflush(stdin);
	scanf("%d", &consumidor.numero);
	
	return consumidor.numero;	
}

// Fun��o que mostra os tipos de c�digo.
int tipo_codigo(){
	int opc;
	
	printf("\n=== CODIGO ===\n");
	printf("1- Residencial - 0.1 kWh\n");
	printf("2- Comercial - 0.4 kWh\n");
	printf("3- Industrial - 0.8 kWh\n");
	printf("Digite o codigo: ");
	scanf("%d", &opc);
	
	return opc;	
}

// Fun��o que retorna o consumo de energia do usu�rio em um m�s. 
float consumo_mes(){
	
	Consumidor consumidor;
		
	// Pede para o usu�rio inserir o consumo.
	printf("Digite a quantidade de kWh consumido durante um mes: ");
	fflush(stdin);
	scanf("%f", &consumidor.consumo);
	
	return consumidor.consumo;
}

// Fun��o que faz o c�lculo e retorna o consumo residencial.
float consumo_residencial(float consumo){
	float kwh =  0.1;
	
	float residencial = consumo * kwh;
	
	return residencial;
}

// Fun��o que faz o c�lculo e retorna o consumo comercial.
float consumo_comercial(float consumo){
	float kwh =  0.4;
	
	float comercial = consumo * kwh;
	
	return comercial;
}

// Fun��o que faz o c�lculo e retorna o consumo industrial.
float consumo_industrial(float consumo){
	float kwh =  0.8;
	
	float industrial = consumo * kwh;
	
	return industrial;
}

// Fun��o principal
int main(){
	// Declara as vari�veis.
	int i = 0;
	int   numero[MAX];
	float consumo[MAX];
	int   opcao;
	float residencial;
	float comercial;
	float industrial;
	float total_consumo;
	float media_residencial_comercial;
	float media_residencial_industrial;
	
	while(true){
		numero[i] = numero_consumidor();
		
		// Se o usu�rio digitar 0, ele para de armazenar os valores de consumo e mostra a soma e as m�dias.
		if(numero[i] == 0){
			
			// Realiza a soma dos tr�s tipos de consumo.
			total_consumo = residencial + comercial + industrial;
			
			printf("\nConsumo total dos tres tipos de consumidor: R$%.2f\n", total_consumo);
			
			// Realiza a m�dia dos c�digos 1 e 2.
			media_residencial_comercial = (residencial + comercial)/2;
			
			printf("Media de consumo dos tipos 1 e 2: R$%.2f\n", media_residencial_comercial);
			
			// Realiza a m�dia dos c�digos 1 e 3.
			media_residencial_industrial = (residencial + industrial)/2;
			
			printf("Media de consumo dos tipos 1 e 3: R$%.2f\n", media_residencial_industrial);
			
			exit(0);	
		}
			
		// Atribui a vari�vel o valor que retorna na fun��o.
		consumo[i] = consumo_mes();
		
		// Mostra a tabela com os tipos de c�digo e atribui a vari�vel o valor que retorna na fun��o..
		opcao = tipo_codigo();
		
		switch(opcao){
			case 1:
				// Atribui a vari�vel o valor que retorna na fun��o.
				residencial = consumo_residencial(consumo[i]);
				printf("\nConsumo residencial: R$%.2f\n", residencial);
			break;
			
			case 2:
				// Atribui a vari�vel o valor que retorna na fun��o.
				comercial = consumo_comercial(consumo[i]);
				printf("\nConsumo comercial: R$%.2f\n", comercial);
			break;
			
			case 3:
				// Atribui a vari�vel o valor que retorna na fun��o.
				industrial = consumo_industrial(consumo[i]);
				printf("\nConsumo industrial: R$%.2f\n", industrial);
			break;
		}
		i++;
	}
	
	return 0;
}
