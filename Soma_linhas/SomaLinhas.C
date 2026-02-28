// Problema "soma_linhas"
// Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos
// elementos da linha correspondente da matriz. Mostrar o vetor gerado. 

#include <stdio.h>

int main(){
    int m, n;
    double somalinha;

    printf("Qual a quantidade de linhas da matriz?: ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz?: ");
    scanf("%d", &n);

    double matriz[99][99], vetor[99];

    for (int i=0; i<m; i++) {
        printf("Digite os elementos da %d a. linha\n", i + 1);

        for (int j=0; j<n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        somalinha = 0;

        for (int j=0; j<n; j++) {
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }

    printf("SOMA DAS LINHAS E COLUNAs:\n");

    for (int i=0; i<m; i++) {
        printf("%.1lf\n", vetor[i]);
    }

    return 0;
}