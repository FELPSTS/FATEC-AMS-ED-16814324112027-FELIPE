#include <stdio.h>
#include <stdlib.h>

// Função de comparação para o qsort
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int tamanho = 5;
    int numeroInteiros[tamanho];

    printf("Insira 5 números:\n");

    for (int i = 0; i < tamanho; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeroInteiros[i]);
    }

    // Chama a função qsort para ordenar os números
    qsort(numeroInteiros, tamanho, sizeof(int), comparar);

    printf("\nNúmeros ordenados em ordem ascendente:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", numeroInteiros[i]);
    }

    return 0;
}
