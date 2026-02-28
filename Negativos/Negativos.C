// Problema "negativos"
// Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. 

#include <stdio.h>

int main () {

    int N;

    printf("Escreva quantos numeros vao ser digitados: ");
    scanf("%d", &N);

    int vet[10];

    for(int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros Negativos:\n");
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }

    return 0 ;
    
}
