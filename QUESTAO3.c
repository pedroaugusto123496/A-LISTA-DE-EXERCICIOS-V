int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

 
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero inteiro nao negativo.\n");
    } else {
        
        printf("O %d-esimo termo da sequencia de Fibonacci �: %d\n", n, fibonacci(n));
    }

    return 0;
}

