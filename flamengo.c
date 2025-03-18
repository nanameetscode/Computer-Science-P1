#include <stdio.h>

int main() //-C é um inteiro indicando se o jogo é em casa '1' ou fora de casa '0'

//-T é um inteiro indicando as condições de tempo do jogo, '1' para sol, '2' para neve e '3' para chuva

//-A é um inteiro indicando a quantidade de pessoas presentes no jogo

//-L é um inteiro indicando a quantidade de jogadores lesionados do flamengo

//-E é um inteiro indicando a quantidade de pontos de entrosamento do 
{
    int C, T, A, L, E;
    double chance = 100.0;

    scanf("%d %d %d %d %d", &C, &T, &A, &L, &E);

    if (C == 0 && (T == 2 || T == 3)) 
    {
        chance = 0.0;
    } else 
    {
        if (C == 1) 
        { //jogando em casa
            if (T == 1) chance += 33.21;
            else if (T == 2) chance += 10.51;
            else if (T == 3) chance -= 20.7;
        } else 
        { //jogando fora de casa
            if (T == 1) chance -= 10.87;
        }
        
        //torcida
        if (C == 1) 
        {
            if (A > 40000) chance += A * 0.0008;
            else chance -= A * 0.0008;
        } else 
        {
            if (A > 45000) chance -= A * 0.0003;
            else chance -= A * 0.0001;
        }
        
        //entrosamento
        if (E > 0) 
        {
            if (C == 1) chance += E * 2.7;
            else chance += E * 5.2;
        } else 
        {
            if (C == 1) chance -= (-E) * 1.8;
            else chance -= (-E) * 1.5;
        }
        
        //jogadores lesionados
        chance -= L * 2.7;
    }
    
    if (chance > 100.0) chance = 100.0;
    if (chance < 0.0) chance = 0.0;
    
    printf("A chance de vitoria do flamengo e de %.2lf\n", chance);
    
    return 0;
}
