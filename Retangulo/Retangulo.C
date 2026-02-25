    // Problema "retangulo"
    // Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
    // da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. 


#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
    double base, altura, area, perimetro, diagonal;

    printf("Escreva a base do retangulo: ");
    scanf("%lf", &base);
    printf("Escreva a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base * base) + (altura * altura));

    printf("\nArea do retangulo: %.4lf\n", area);
    printf("Perimetro do retangulo: %.4lf\n", perimetro);
    printf("Diagonal do retangulo: %.4lf\n", diagonal);

    return 0;

}