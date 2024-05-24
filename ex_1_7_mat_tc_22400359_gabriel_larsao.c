/*Elabore um programa, utilizando laços encadeados, para armazenar doze valores 
numéricos inteiros numa matriz 3 x 4, ou seja, numa matriz com 3 linhas e 4 colunas. 
No final mostre os valores armazenados na matriz. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][4], aux[10], l, c;
	
	for (l = 0; l < 3; l++) { //Para trocar a linha
		for (c = 0; c < 4; c++) { //Para trocar a coluna
			printf("\nDigite %dº número da %dª linha ", c+1, l+1);
			mat[l][c] = atoi(gets(aux));
		}
		printf("\n");
	}
	
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 4; c++) {
			printf("\n%dº número da %dª linha da matriz: %d", c+1, l+1, mat[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}
