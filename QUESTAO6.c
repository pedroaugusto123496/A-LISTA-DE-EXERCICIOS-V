#include <stdio.h>
int maior_de_tres(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    return maior;
}
int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    int maior = maior_de_tres(a, b, c);
    printf("O maior numero e: %d\n", maior);

    return 0;
}
