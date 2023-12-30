#include <stdio.h>

int main()
{

    int fatorial = 0;
    int resposta = 1;
    printf("Digite o valor para calcular o fatorial: "); scanf("%i", &fatorial);

    for (; fatorial >= 1; fatorial = fatorial - 1)
    {
        printf("O valor de fatorial é %i\n", fatorial);
        printf("O valor de resposta é %i\n", resposta);
        resposta = resposta * fatorial;
    }

    printf("O numero fatorial é %i\n", resposta);
    return 0;
}
