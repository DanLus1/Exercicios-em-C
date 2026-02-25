// Problema "idades"
// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo. 

    #include <stdio.h>
    #include <string.h>

    void ler_texto(char *buffer, int length) {
        fgets(buffer, length, stdin);
        strtok(buffer, "\n");
    } 

    void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    int main () {
        char nome1[50], nome2[50];
        double idade1, idade2, media;

        printf("Dados da primeira pessoa\n");
        printf("Nome: ");
        ler_texto(nome1, 50);
        printf("Idade: ");
        scanf("%lf", &idade1);
        limpar_entrada();

        printf("Dados da segunda pessoa\n");
        printf("Nome: ");
        ler_texto(nome2, 50);
        printf("Idade: ");
        scanf("%lf", &idade2);
        limpar_entrada();

        media = (idade1 + idade2) / 2.0;

        // Agora o printf sairá em uma linha só
        printf("\nA idade media de %s e %s e de %.1lf anos.\n", nome1, nome2, media);

        return 0;
    }