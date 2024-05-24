/*Elabore um programa, utilizando laços encadeados, para armazenar doze valores 
numéricos inteiros numa matriz 3 x 4, ou seja, numa matriz com 3 linhas e 4 colunas. 
No final mostre os valores armazenados na matriz. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][4], aux[10], i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("\nDigite %dº número da %dº coluna da matriz: ", j+1, i+1);
			mat[j][i] = atoi(gets(aux));
		}
		printf("\n");
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n%dº número da %dº coluna da matriz: %d", j+1, i+1, mat[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
