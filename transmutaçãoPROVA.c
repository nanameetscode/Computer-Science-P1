#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int produto_digito(int num) 

{
    if (num == 0)
        return 1;
    int digito = num % 10;
    if (digito == 0)
        return produto_digito(num / 10);
    else
        return digito * produto_digito(num / 10);
}

//fun??o pra calcular o VALOR ABSOLUTO
int absoluto(int a) 

{
    if (a < 0)
        return -a;
    else
        return a;
}

int processar(int n, int s) //faz c calma pelo amor de deus. sao varios ifs e elses

{
    if (n == 0)
        return s;
    int x;
    scanf("%d", &x);

    if (s % 2 == 0 && x % 2 == 0) 
    {
    //CASO SE OS DOIS FOREM PARES!! dividir por 2 e somar os resultados

        s = (s / 2 + x / 2);
    } else if (s % 2 != 0 && x % 2 != 0) 

    {
        //caso se os dois forem impares
        int produto_s = produto_digito(s);
        int produto_x = produto_digito(x);
        s = produto_s + produto_x;
    } else {
        //se nao tiver a mesma paridade (paridade eh ser igual (par ou impar) aff) tenho que diminuir s - x
        s = absoluto(s - x);
    }

    return processar(n - 1, s); //tamo recursando tamo recursando sempre -1! :) 
}

int main()

{
        int n, s;
        scanf("%d %d", &n, &s);

        int resultado = processar(n, s);

        printf("%d\n", resultado);
    
    return 0;
}