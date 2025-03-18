#include <stdio.h>

int main()
{
    float salario, novo_salario;

    scanf("%f", &salario); //entrada do salario sem aumento

    if (salario > 500) {
        novo_salario = salario * 1.10;
    } else if (salario > 300) {
        novo_salario = salario * 1.07;
    } else {
        novo_salario = salario * 1.05;
    }
    
    printf("%.2f\n", novo_salario);
    
    return 0;
    
}