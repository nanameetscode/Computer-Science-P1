#include <stdio.h>

int fatorial (int numero) {


if (numero == 0 || numero == 1)
{
    return 1;
} else {
    return numero * fatorial (numero - 1); }
} 

int main()
{

int numero;
int resultado;

scanf("%d", &numero);

resultado = fatorial (numero);

printf("%d", resultado);

    return 0;
}