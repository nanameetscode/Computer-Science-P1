#include <stdio.h>

//codigo feito em aula, CORRIGIR dps

///int i sendo o numero inicial
//int t sendo o ultimo numero da sequencia
//int atual sendo o numero atual inicial

int serie(int i, int t, int atual) {
    if (i == t)
        return atual;

    if (i % 2 == 0)
        atual += 3;
    else
        atual += atual % 5;

    return serie(i + 1, t, atual);
}

int main() {
    int atual, t, resposta;

    scanf("%d%d", &atual, &t);

    resposta = serie(0, t, atual);

    printf("%d\n", resposta);

    return 0;
}