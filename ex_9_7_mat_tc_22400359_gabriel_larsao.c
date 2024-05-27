/*9.  Faça um programa que: 

a) Leia uma matriz 3x3 de números inteiros. 
b) Imprima-a em formato matricial. 
c) Leia um número inteiro k. 
d) Atualize a matriz com seu valor multiplicado por k, e imprima-a no formato matricial. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int num[3][3] = {{1,2,3}, {4,5,6},{7,8,9}}, c, l, mult;
	
	//Imprimir
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 3; c++) {
			printf("\nLinha %d, Elemento %d: %d	", l + 1, c + 1, num[l][c]);
		}
	}
		
	printf("\n\nDigite um número para multiplicar a matriz: ");
	scanf("%d", &mult);
		
	//Multiplicar 
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 3; c++) {
			num[l][c] *= mult;
			printf("\nLinha %d, Elemento %d: %d", l+1, c+1, num[l][c]);		
		}
	}
	
	
	
	return 0;
}
