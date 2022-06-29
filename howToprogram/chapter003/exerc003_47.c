/*
3.47diferença
Calculadora de crescimento populacional mun-
dial. Use a Web para determinar a população mundial
atual e sua taxa de crescimento anual. Escreva uma
aplicação que leia esses valores, depois apresente a po-
pulação mundial estimada após um, dois, três, quatro e
cinco anos.

Calculo = Nasc - Mortes + Saldo Migratorio / populacão total
Resultado em %

Pop atual = 8 Bilhões
Taxa de crescimento = 1%
*/
#include<stdio.h>

int main(){

    float pop = 8000000000;
    float cres = 1.01;
    int anos = 1;
    float calc = 1;
    int cont = 0;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);

    printf("Poputação: %.0f\n Crescimento anual: %.02f\n", pop, cres);

    while (cont < anos){
        calc = pop * cres;
        cont++;
        printf("%d\n", cont);
    }

    printf("Crescimento em 1 ano = %f\n", calc);
}
