#include <stdio.h>

int main() {
    int a = 0, b = 0, inicio = 0, fim = 0;
    int i; // vari�vel para percorrer os n�meros

    // Ler os dois n�meros
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    // Enquanto forem iguais, pedir novamente
    while (a == b) {
        printf("Os numeros sao iguais! Informe o segundo numero novamente: ");
        scanf("%d", &b);
    }

    // Descobrir qual � o menor e o maior
    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    // Mostrar todos os n�meros entre inicio e fim COM WHILE
    i = inicio + 1;  // come�a no primeiro n�mero depois do menor
    printf("Numeros inteiros entre %d e %d:\n", inicio, fim);

    while (i < fim) {
        printf("%d ", i);
        i++; // vai somando at� chegar no fim
    }

    printf("\n");
    return 0;
}


