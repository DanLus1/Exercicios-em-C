// Problema "soma_vetor"
// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
// - Imprimir todos os elementos do vetor
// - Mostrar na tela a soma e a média dos elementos do vetor 

#include <stdio.h>

int main () {

    int N;
    double soma, media;

    printf("Escreva quantos numeros vao ser digitados: ");
    scanf("%d", &N);

    double vet[99];

    for(int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    media = 0;

    printf("\nValores:\n");
    for (int i = 0; i < N; i++) {
        printf("%.1lf ", vet[i]);
    }

    printf("\n");

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma = soma + vet[i];
    }

    printf("Soma = %.2lf\n", soma);
    
    media = soma / N;
    printf("Media = %.2lf\n", media);

    return 0 ;
    
}