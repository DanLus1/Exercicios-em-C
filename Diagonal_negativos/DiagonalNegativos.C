// Problema "diagonal_negativos"
// Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz. 

#include <stdio.h>

int main(){
    int n, qtdnegativos;

    printf("Qual a ordem da matriz?: ");
    scanf("%d", &n);

    int matriz[99][99];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
			printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (int i=0; i<n; i++) {
        printf("%d ", matriz[i][i]);
    }

    qtdnegativos = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] < 0) {
                qtdnegativos++;
            }
        }
    }

	printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtdnegativos);

    return 0;
}