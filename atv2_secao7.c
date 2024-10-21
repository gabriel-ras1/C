#include <stdio.h>

int main() {
    int a[10];
    int contagem;

    // Lê 10 números inteiros do usuário
    for (int i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
      if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            contagem++;
        }
        
    }
    
    printf("quantidades de numeros pares: %d ",contagem);

    return 0;
}