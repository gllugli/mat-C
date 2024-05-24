/*Refaça o problema quatro para obter a média aritmética dos valores de cada linha. 
No final exiba um relatório com o número da linha e o correspondente valor calculado. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[4][5], aux[10];
	int c, l, somaTotal, somaLinha, media;
	
	//Receber valores
	for (l = 0; l < 4; l++) {
		for (c = 0; c < 5; c++) {
			printf("\nDigite o número para a posição %d da %dª linha: ", c, l + 1);
			mat[l][c] = atoi(gets(aux));
			somaTotal += mat[l][c];
		}
		printf("\n");
	}
	
	//Soma da Linha e Média da Linha
	for (media = 0, l = 0; l < 4; l++) {
		for (somaLinha = 0, c = 0; c < 5; c++) {
			somaLinha += mat[l][c];
		}
		
		media = somaLinha / 5;
		
		printf("\nSoma da %dª linha: %d \nMédia da %dª linha: %d \n", l + 1, somaLinha, l + 1, media);
	}
	
	printf("\n\nSoma total: %d", somaTotal);
	
	return 0;
}
