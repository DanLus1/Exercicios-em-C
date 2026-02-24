// Problema "terreno"
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,o programa deve mostrar o valor da área do terreno, bem
// como o valor do preço do terreno, ambos com duas casas decimais, conforme exemplo. 

#include <stdio.h>

int main() {

    double largura, comprimento, valor_metro_quadrado, area, valor_terreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado do terreno: ");
    scanf("%lf", &valor_metro_quadrado);

    area = largura * comprimento;
    valor_terreno = area * valor_metro_quadrado;

    printf("\nArea do terreno: %.2lf\n", area);
    printf("Valor do terreno: %.2lf\n", valor_terreno);

    return 0;
}