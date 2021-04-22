#include <stdio.h>
#include <stdlib.h>

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
05. Estudantes do 3� per�odo de CCO da UNIFG, uma grande empresa est� desenvolvendo um novo sistema 
operacional para m�quinas de venda de bolinhas de borracha de R$ 1,00, mas precisa realizar testes no 
Gerenciador de Mem�ria desse novo sistema. Voc� foi contratado para fazer um programa para verificar se o 
gerenciador de mem�ria est� funcionando corretamente.
Seu programa dever� ler 3 n�meros inteiros, 3 n�meros decimais, 3 letras, armazen�-las em vari�veis, e depois, 
atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros pelo n�mero 2021, os decimais 
por 9.99, e as letras por �X�. Depois da substitui��o, o programa dever� exibir o valor das vari�veis j� devidamente 
atualizados.
*/

// Define um maximo para o vetor.
#define MAX 3

// Cria uma estrutura para gerenciar.
typedef struct{
	int num_int[MAX];
	float num_dec[MAX];
	char letras[MAX];
}Gerenciador;

// FUNCOES PARA PREENCHER OS NUMEROS E LETRAS!!!

// Funcao para preencher os numeros inteiros.
int *numero_inteiro(int i){
	Gerenciador gerenciador;
	
	// Preenche os numeros inteiros.
	printf("Numero %d sendo inteiro: ", i+1);
	fflush(stdin);
	scanf("%d", &gerenciador.num_int[i]);
	
	return &gerenciador.num_int[i];
}

// Funcao para preencher os numeros decimais.
float *numero_decimal(int i){
	Gerenciador gerenciador;
	
	// Preenche os numeros decimais.
	printf("Numero %d sendo decimal: ", i+1);
	fflush(stdin);
	scanf("%f", &gerenciador.num_dec[i]);	
	
	return &gerenciador.num_dec[i];
}

// Funcao para preencher as letras.
char *todas_letras(int i){
	Gerenciador gerenciador;
	
	// Preenche as letras.
	printf("Letra %d: ", i+1);
	fflush(stdin);
	scanf(" %c", gerenciador.letras);
	
	return &gerenciador.letras[i];	
}

// FUNCOES QUE SUBSTITUEM OS NUMEROS E LETRAS!!!

// Funcao para modificar os numeros inteiros.
void modifica_num_int(int i, int *num_int){
	
	// Realiza a substituicao para cada lugar no vetor.
	num_int[i] = 2021;
	
	// Imprime a substituicao.
	printf("Numero inteiro %d apos a substituicao: %d\n", i+1, num_int[i]);
}

// Funcao para modificar os numeros decimais.
void modifica_num_dec(int i, float *num_dec){
	
	// Realiza a substituicao para cada lugar no vetor.
	num_dec[i] = 9.99;

	// Imprime a substituicao.
	printf("Numero decimal %d apos a substituicao: %.2f\n", i+1, num_dec[i]);
}

// Funcao para modificar as letras.
void modifica_letras(int i, char *letras){
	
	// Realiza a substituicao para cada lugar no vetor.
	letras[i] = 'X';
	
	// Imprime a substituicao.
	printf("Letra %d apos a substituicao: %c\n", i+1, letras[i]);
}

// FUNCAO PRINCIPAL CHAMA TODAS AS OUTRAS FUNCOES!!!

// Funcao principal.
int main(){	
	int i;
	int *num_int;
	float *num_dec;
	char *letras;
	
	for(i=0; i<MAX; i++){
		num_int = numero_inteiro(i);
	}
	
	printf("\n");
	
	for(i=0; i<MAX; i++){
		num_dec = numero_decimal(i);
	}

	printf("\n");
	
	for(i=0; i<MAX; i++){
		letras = todas_letras(i);
	}
	
	printf("\n");
	
	for(i=0; i<MAX; i++){
		modifica_num_int(i, num_int);	
	}

	printf("\n");
	
	for(i=0; i<MAX; i++){
		modifica_num_dec(i, num_dec);	
	}

	printf("\n");
	
	for(i=0; i<MAX; i++){
		modifica_letras(i, letras);	
	}
	
	return 0;
}
