// Problema "menor_de_tres"
// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.

#include <stdio.h>

int main () {

    int a, b, c, menor;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &a);
    printf("Escreva o segundo numero: ");
    scanf("%d", &b);
    printf("Escreva o terceiro numero: ");
    scanf("%d", &c);
    
    menor = 0;
    
    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    printf("\nMenor numero = %d", menor);

    return 0;

}