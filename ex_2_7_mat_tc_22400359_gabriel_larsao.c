/*No programa anterior, nós percorremos a matriz linha por linha, ou seja, 
fixamos o valor da linha e variamos a coluna. Agora vamos refazê-lo percorrendo 
a matriz coluna por coluna, ou seja, fixamos o valor da coluna e variamos a linha. 
No final mostre os valores armazenados na matriz.*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][4], aux[10], i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("\nDigite %dº número da %dª coluna da matriz: ", j+1, i+1);
			mat[j][i] = atoi(gets(aux));
		}
		printf("\n");
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n%dº número da %dª coluna da matriz: %d", j+1, i+1, mat[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
