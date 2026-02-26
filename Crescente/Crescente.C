// Problema "crescente" (adaptado de URI 1113)
// Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar
// quando forem digitados dois valores iguais. 

#include <stdio.h>

int main () {

    int x, y;

    printf("Escreva dois numeros\n ");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
        if (x < y) {
            printf("Crescente\n");    
        }
        else {
            printf("Decrescente\n");    
        }

    printf("Digite outros dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    }
    
    return 0;

}