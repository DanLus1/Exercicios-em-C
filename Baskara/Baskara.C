// Problema "baskara"
// Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo.
// Se a equação não possuir raízes reais, mostrar uma mensagem. 

#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {

    double coeficienteA, coeficienteB, coeficienteC, x1 , x2, delta;

    printf("Digite o coeficiente A: ");
    scanf("%lf", &coeficienteA);
    printf("Digite o coeficiente B: ");
    scanf("%lf", &coeficienteB);
    printf("Digite o coeficiente C: ");
    scanf("%lf", &coeficienteC);

    delta = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC;

    if (coeficienteA == 0 || delta < 0) {
        printf("\nEsta equacao nao possui raizes reais");
    }
    else {
        x1 = (-coeficienteB + sqrt(delta)) / (2 * coeficienteA);
        x2 = (-coeficienteB - sqrt(delta)) / (2 * coeficienteA);
        printf("\nX1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;

}
