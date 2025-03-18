#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial (int n) {
    return (n <= 1) ? 1 : n * fatorial(n - 1);
}

void processar() {
    int n;
    scanf("%d", &n);
    if (n == -1) return;
    printf("%d\n", fatorial(n));
    processar();
    
}
int main() {
    processar();
    
	return 0;
}