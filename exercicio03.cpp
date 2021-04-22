#include <stdio.h>
#include <stdlib.h>

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
03. Nessa questão escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo
N linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 2 nos elementos acima da
diagonal principal e o valor -3 nos elementos abaixo da diagonal principal. Veja a figura para entender melhor o
preenchimento da matriz. Lembrar que a matriz deve ser quadrada. (Número de linha e colunas iguais).
*/

// Funcao principal.
int main() {
	// Quantidade de LinhasxColunas.
    int n;
    
    // Pede para o usuario informar a quantidade de LinhasxColunas da matriz.
    printf("Digite a quantidade de LinhasxColunas da matriz:\n");
    printf("Exemplo: 5 para uma matriz 5x5...\n");
    printf("- ");
    scanf("%d", &n); 

    // Declarção da matriz.
    int mat[n][n];

    int i;
    int j;

    printf("Matriz:\n");
    // Impressão da matriz 
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        	// Impressão dos valores da diagonal principal (valores = 0).
            if(i==j){
            	printf("0\t", mat[i][j]);
            // Impressão dos valores abaixo da diagonal principal (valores = -3).   
            }else if(i>j){
                printf("-3\t", mat[i][j]);
			// Impressão dos valores acima da diagonal principal (valores = 2). 
            }else if(i<j){
                    printf("2\t", mat[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
