/*Programa de juros compostos modificado. Modifique
o programa de juros compostos da Seção 4.6 e
repita suas etapas para taxas de juros de 5, 6, 7, 8, 9 e 10
por cento. Use um loop for para variar a taxa de juros.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double valor;              /* valor em depósito */
    double principal = 1000.0; /* principal inicial */
    double taxa = .05;         /* taxa anual de juros */
    int ano;                   /* contador do ano */
    printf("%4s%21s\n", "Ano", "Valor na conta");
    for (ano = 1; ano <= 10; ano++)
    {
        valor = principal * pow(1.0 + taxa, ano);
        printf("%4d%21.2f\n", ano, valor);
    }         /* fim do for */
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */