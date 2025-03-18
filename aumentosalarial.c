#include <stdio.h>
#include <math.h>

double calcular_percentual(double salario) 
{
    if (salario <= 280.00) return 20.0;
    if (salario > 280.00 && salario < 700.00) return 15.0;
    if (salario >= 700.00 && salario < 1500.00) return 10.0; //função pra calcular o percentual de aumento
    return 5.0; 
} 

int main() 
{
    double salario, percentual, aumento, novo_salario;
    
    scanf("%lf", &salario); //lê o salario
    percentual = calcular_percentual(salario); //usa a função pra calcular o percentual de aumento
    
    aumento = salario * (percentual / 100.0);
    novo_salario = salario + aumento; //calculando o aumento e o novo salario
    
    printf("%.2lf\n", salario);
    printf("%.0lf\n", percentual);
    printf("%.2lf\n", aumento);
    printf("%.2lf\n", novo_salario);
    
    return 0;
}
