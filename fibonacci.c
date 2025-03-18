#include <stdio.h>

int fibonacci(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite um numero para calcular Fibonacci: ");
    scanf("%d", &n);

    printf("O Fibonacci de %d é: %d\n", n, fibonacci(n));

    return 0;
}
