#include <stdio.h>

int pertence_fibonacci(int n) {
    int a = 0, b = 1, c;
    
    if (n == 0 || n == 1) {
        return 1;  
    }
    
    c = a + b;
    while (c <= n) {
        if (c == n) {
            return 1;  // caso o número pertença a sequência fibonacci
        }
        a = b;
        b = c;
        c = a + b;
    }
    
    return 0;  // caso não pertença
}

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (pertence_fibonacci(num)) {
        printf("O numero %d pertence à sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence à sequencia de Fibonacci.\n", num);
    }
    
    return 0;
}
