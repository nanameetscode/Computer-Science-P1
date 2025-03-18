#include <stdio.h>

int main() 
{
    int dia, socio, estudante;
    float valor;

    scanf("%d", &dia);
    scanf("%d", &estudante);
    scanf("%d", &socio);

    if (dia >= 1 && dia <= 4) 
    {
        valor = 15.0; //segunda a quinta
    } else {
        valor = 30.0; //sexta a domingo
    }

    if (estudante == 1) 
    {
        valor *= 0.7; //desconto de 30% para estudante
        printf("ESTUDANTE: R$ %.2f\n", valor);
    } else if (socio == 1 && (dia == 5 || dia == 6 || dia == 7)) 
    {
        valor *= 0.8; //desconto de 20% para sócio no final de semana (sexta a domingo)
        printf("SOCIO: R$ %.2f\n", valor);
    } else {
        printf("COMUM: R$ %.2f\n", valor);
    }

    return 0;
}
