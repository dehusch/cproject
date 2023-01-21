/*4.19 Calculando vendas. Um varejista on-line vende cinco
produtos diferentes cujos preços de revenda aparecem
na tabela a seguir:
Número do produto Preço de revenda
1       R$ 2,98
2       R$ 4,50
3       R$ 9,98
4       R$ 4,49
5       R$ 6,87
Escreva um programa que leia uma série de pares de números
da seguinte forma:
a) Número do produto.
b) Quantidade vendida durante um dia.
Seu programa deverá usar uma estrutura switch para
ajudar a determinar o preço de revenda para cada produto.
O programa deverá calcular e exibir o valor de revenda
total de todos os produtos vendidos na semana anterior.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int productNumber;
    int quant;
    double total = 0.0;

    printf("Entre com o numero do item e quantidade.\n");
    printf("Digite -1 para sair\n");
    scanf("%d", &productNumber);

    while (productNumber != -1)
    {
        scanf("%d", &quant);

        switch (productNumber)
        {
        case 1:
            total += quant * 3;
            break;

        case 2:
            total += quant * 10;
            break;

        case 3:
            total += quant * 100;
            break;

        case 4:
            total += quant * 500;
            break;

        case 5:
            total += quant * 1000;
            break;

        default:
            printf("Codigo invalido: %d\n", productNumber);
            printf(" Quantidade: %d\n", quant);
        }

        scanf("%d", &productNumber); /* get next input */
    }

    printf("Total de itens vendidos: %.2f\n", total);
}