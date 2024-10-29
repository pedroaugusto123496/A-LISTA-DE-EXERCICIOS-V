#include <stdio.h>

int buscaBinaria(int arr[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1; // Elemento não encontrado
    }

    int meio = inicio + (fim - inicio) / 2;

    if (arr[meio] == valor) {
        return meio; // Elemento encontrado
    } else if (arr[meio] > valor) {
        return buscaBinaria(arr, inicio, meio - 1, valor); // Busca na metade esquerda
    } else {
        return buscaBinaria(arr, meio + 1, fim, valor); // Busca na metade direita
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int valor = 10;

    int resultado = buscaBinaria(arr, 0, n - 1, valor);
    if (resultado != -1) {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado no array\n");
    }

    return 0;
}
