#include <stdio.h>
int soma (int n) {
    if ( n == 1) {  
        return 1;
    } else {  
        return n + soma(n - 1);
    }
}

int main(){
    int n;
    int resultado;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &n);
    
    resultado = soma(n);
    printf("O resultado da soma dos numeros de %d a 1 e %d\n", n, resultado);
    
    return 0;
}
