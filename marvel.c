#include <stdio.h>

int main()
{
    int idade, heroi, preco; // Declaração das variáveis

    printf("Digite sua idade\n");
    scanf("%d", &idade); // Coleta a idade do usuário

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    // Escolhendo seu herói favorito
    printf("Escolha seu fav\n");
    printf("1 - Marvel, 2 - DC, 3 - Não liga\n");
    printf("De onde é seu herói fav?\n");
    scanf("%d", &heroi); // Coleta a informação do favorito do usuário

    if (heroi == 1 || heroi == 2) 
    {
        preco = 20;
        printf("Você pagará %d reais\n", preco);
    } 
    else if (heroi == 3) 
    {
        preco = 10;
        printf("Você pagará %d reais\n", preco);
    }

    return 0;
}
