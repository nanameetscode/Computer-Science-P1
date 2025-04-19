#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

//função pro combate entre Oileh e o inimigo
int briguem (int vidaOileh, int ataqueOileh, int vidaInimigo, int ataqueInimigo) 
{
    if (vidaInimigo <= 0 || vidaOileh <= 1)
        return vidaOileh;

    vidaInimigo = vidaInimigo - ataqueOileh; //batendo nele

    if (vidaInimigo > 0) {
        vidaOileh = vidaOileh - ataqueInimigo;
    }

    return briguem (vidaOileh, ataqueOileh, vidaInimigo, ataqueInimigo);
}

// função recursiva
void combate(int andar, int total, int vida, int ataque, int inimigos[][2]) {
    if (andar == total) {
        if (vida < 0)
            vida = 0;
        printf("%d %d\n", vida, ataque);
        if (vida > 0)
            printf("Vamos para casa!\n");
        else
            printf("Eu voltarei\n");
        return;
    }

    int vidaInimigo = inimigos[andar][0];
    int ataqueInimigo = inimigos[andar][1];

    vida = luta(vida, ataque, vidaInimigo, ataqueInimigo);

    if (vida <= 0) {
        printf("0 %d\n", ataque);
        printf("Eu voltarei!\n");
        return;
    }

    int proximo = andar + 1;
    if (proximo % 5 == 0)
        vida = vida + 20;
    if (proximo % 10 == 0)
        ataque = ataque + 5;

    combate(proximo, total, vida, ataque, inimigos);
}

// void recursiva pra ler os dados dos inimigos
void ler(int i, int total, int inimigos[][2]) {
    if (i == total)
        return;
    scanf("%d %d", &inimigos[i][0], &inimigos[i][1]);
    ler(i + 1, total, inimigos);
}

int main() 

{
    int vida, ataque, andares;
    scanf("%d %d", &vida, &ataque);
    scanf("%d", &andares);

    int inimigos[50][2];
    ler(0, andares, inimigos);
    combate(0, andares, vida, ataque, inimigos);

return 0;
}