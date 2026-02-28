// Problema "soma_impares" (adaptado de URI 1071)
// Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles. Os números ímpares que estão nas pontas não contam. 

#include <stdio.h>

int main () {

    int X, Y, soma, troca;

    printf("Escreva o valor de X: ");
    scanf("%d", &X);
    printf("Escreva o valor de Y: ");
    scanf("%d", &Y);

    if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
    }

    soma = 0;
    
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos impares = %d\n", soma);
    
    return 0;
}