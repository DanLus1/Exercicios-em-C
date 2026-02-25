// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente  com um
// texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO", conforme exemplos.

    #include <string.h>
    #include <stdio.h>

    int main () {

        double nota1, nota2, media;

        printf("Escreva a primeira nota: ");
        scanf("%lf", &nota1);
        printf("Escreva a segunda nota: ");
        scanf("%lf", &nota2);

        media = (nota1 + nota2) / 2;

        printf("\nMedia = %.1lf\n", media);

        if (media < 60.0) {
            printf("Reprovado");
        }
        else {
            printf("Aprovado");
        }

        return 0;

    }
