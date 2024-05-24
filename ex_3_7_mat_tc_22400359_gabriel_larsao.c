/*Construa um programa que efetue a leitura, a soma posicional 
e a impressão do resultado, entre duas matrizes inteiras que comportem 
25 elementos. Use uma terceira matriz para armazenar o resultado. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat1[5][5], mat2[5][5], resultado[5][5], aux[10];
	int c, l;
	
	printf("\nNúmeros para a Primeira Matriz");
	
	//Receber os números pra mat1
	for (c = 0; c < 5; c++) {
		printf("\n");
		
		for (l = 0; l < 5; l++) {
			printf("\nDigite o número da posição %d da %dª coluna: ", l, c+1);
			mat1[l][c] = atoi(gets(aux));
		}
		printf("\n");
	}
	
	printf("\nNúmeros para a Segunda Matriz");
	
	//Receber os números pra mat2
	for (c = 0; c < 5; c++) {
		printf("\n");
		
		for (l = 0; l < 5; l++) {
			printf("\nDigite o número da posição %d da %dª coluna: ", l, c+1);
			mat2[l][c] = atoi(gets(aux));
		}
	}
	
	printf("\nResultado da soma posicional: \n");
	
	//Soma posicional e printar o resultado
	for (c = 0; c < 5; c++) {
		for (l = 0; l < 5; l++) {
			printf("\nSoma da posição %d da %dª coluna das duas matrizes: %d", l, c + 1, resultado[l][c] = mat1[l][c] + mat2[l][c]);
		}
		
		printf("\n");
	}
	
	return 0;
}
