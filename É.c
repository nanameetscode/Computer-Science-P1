#include <stdio.h>

int eh_primo(int numero, int i)
{
    if (numero == 0 || numero == 1)
        return 0;

    if (i == numero)
        return 1;

    if (numero % i == 0)
        return 0;

    return eh_primo(numero, i + 1);
}

void ler()
{
    int n;
    scanf("%d", &n);

    if (n == -1)
        return;

    printf("%d\n", eh_primo(n, 2));

    ler();
}

int main()
{
    ler();
    return 0;
}
