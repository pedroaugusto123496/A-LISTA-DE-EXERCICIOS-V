#include <stdio.h>
#include <stdlib.h>
void razao(int v, int r, int* q, int a){
	for (int i = 0; i < a; i++) {
        q[i] = v + i * r; 
    }
}
  

int main()
{
    int a;
    int v;
    int r;
    printf("escreva a quantidade de elementos da lista:\n");
    scanf("%d", &a);
    int q[a];
    printf("escreva o valor inicial da progressao:\n");
    scanf("%d", &v);
    printf("escreva a razao da progressao:\n");
    scanf("%d", &r);
    
    razao(v, r, q, a);
    printf("Progressao aritmetica:\n");
    for (int i = 0; i < a; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");


    return 0;
}

