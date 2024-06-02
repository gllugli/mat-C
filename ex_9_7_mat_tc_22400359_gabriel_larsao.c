/*9.  Faça um programa que: 

a) Leia uma matriz 3x3 de números inteiros. 
b) Imprima-a em formato matricial. 
c) Leia um número inteiro k. 
d) Atualize a matriz com seu valor multiplicado por k, e imprima-a no formato matricial. */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int num[3][3], c, l, mult;
	
	//Ler números
	for (l = 0; l < 3; l++) {
		for (c = 0; c < 3; c++) {
			printf("\nDigite um número pra posição %d da linha %d: ", c, l+1);
			scanf("%d", &num[l][c]);
		}
	}
	
	//Imprimir
	
    for (l = 0; l < 3; l++) {
    	printf("\n");
        for (int c = 0; c < 3; c++) {
            printf("%d  ", num[l][c]);
            if (c == 3)
                printf("\n");
        }
    }
		
	printf("\n\nDigite um número para multiplicar a matriz: ");
	scanf("%d", &mult);
		
	//Multiplicar 
	for (l = 0; l < 3; l++) {
    	printf("\n");
        for (int c = 0; c < 3; c++) {
        	num[l][c] *= mult;
            printf("%d  ", num[l][c]);
            if (c == 3)
                printf("\n");
        }
    }
	
	return 0;
}
