/*

Somar uma matriz por linha, ou seja, obter o total 
de cada linha da matriz. No final gere uma tela de 
saída mostrando esses valores e o total geral de toda a matriz. 

Use uma matriz 4 x 5. 

*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int mat[4][5], aux[10];
	int c, l, somaTotal, somaLinha;
	
	//Receber valores
	for (c = 0; c < 5; c++) {
		for (l = 0; l < 4; l++) {
			printf("\nDigite o número para a posição %d da coluna %d: ", l, c + 1);
			mat[l][c] = atoi(gets(aux));
			somaTotal += mat[l][c];
		}
		printf("\n");
	}
	
	//Soma da Linha
	for (l = 0; l < 4; l++) {
		for (somaLinha = 0, c = 0; c < 5; c++) {
			somaLinha += mat[l][c];
		}
		printf("\nSoma da %dª linha: %d", l + 1, somaLinha);
	}
	
	printf("\n\nSoma total: %d", somaTotal);
	
	return 0;
}
