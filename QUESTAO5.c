#include <stdio.h>
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    
    printf("Digite dois n�meros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("O MDC de %d e %d �: %d\n", num1, num2, mdc(num1, num2));
    
    return 0;
}
