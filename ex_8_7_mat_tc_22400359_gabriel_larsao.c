#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    char nomes[25][50];
    int total_caracteres = 0, i, j;

    printf("\nDigite 25 nomes: ");

    //Receber nomes
    for (i = 0; i < 25; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);

        // Conversão para maiúsculas
        for (j = 0; nomes[i][j] != '\0'; j++) {
            if (nomes[i][j] >= 'a' && nomes[i][j] <= 'z') {
                nomes[i][j] = nomes[i][j] - 'a' + 'A';
                total_caracteres++;
            }
        }
    }

    //Ver se tem Maria
    for (i = 0; i < 25; i++) {
        if (strcmp(nomes[i], "MARIA") == 0) {
            printf("\nNome Maria encontrado na linha %d\", i + 1);
        }
    }

    printf("\nTotal de caracteres convertidos para maiúsculas: %d\n", total_caracteres);

    return 0;
}
