#include <stdio.h>

int main() {
    int a = 0, b = 0, inicio = 0, fim = 0;
    int i; // variável para percorrer os números

    // Ler os dois números
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    // Enquanto forem iguais, pedir novamente
    while (a == b) {
        printf("Os numeros sao iguais! Informe o segundo numero novamente: ");
        scanf("%d", &b);
    }

    // Descobrir qual é o menor e o maior
    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    // Mostrar todos os números entre inicio e fim COM WHILE
    i = inicio + 1;  // começa no primeiro número depois do menor
    printf("Numeros inteiros entre %d e %d:\n", inicio, fim);

    while (i < fim) {
        printf("%d ", i);
        i++; // vai somando até chegar no fim
    }

    printf("\n");
    return 0;
}


