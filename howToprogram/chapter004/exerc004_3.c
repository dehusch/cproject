/*
Escreva uma instrução ou um conjunto de instruções
para realizar cada uma das seguintes tarefas:
a) Somar os inteiros ímpares entre 1 e 99 usando uma
estrutura for. Considere que as variáveis inteiras
soma e contador tenham sido declaradas.

b) Imprima o valor 333,546372 em uma largura de
campo de 15 caracteres com precisões de 1, 2, 3,
4 e 5. Alinhe a saída à esquerda. Quais são os cinco
valores impressos?

c) Calcule o valor de 2.5 elevado à potência 3 usando
a função pow. Imprima o resultado com uma precisão
de 2 em uma largura de campo de 10 posições.
Qual é o valor impresso?

d) Imprima os inteiros de 1 a 20 usando um loop while
e a variável contadora x. Considere que a variável x
tenha sido declarada, mas não inicializada. Imprima
somente cinco inteiros por linha. [Dica: use o
cálculo x % 5. Quando o resultado for 0, imprima
um caractere de nova linha, senão imprima um caractere
de tabulação.]

e) Repita o Exercício 4.3 (d) usando uma estrutura for.

*/
#include<stdio.h>
#include<math.h>

int soma, cont;
double tol = 333.546372;
double pot;
int x;

int main(int argc, char const *argv[])
{
    for (cont = 1 ; cont <= 99; cont += 2)//Resposta A
    {
        //printf("%d", cont);
        soma += cont;        
    }
    
    printf("%d\n\n", soma);

    printf("%-15.1f\n", tol);//Resposta B
    printf("%-15.2f\n", tol);//Resposta B
    printf("%-15.3f\n", tol);//Resposta B
    printf("%-15.4f\n", tol);//Resposta B
    printf("%-15.5f\n\n", tol);//Resposta B

    pot = pow(2.5 , 3); //Resposta C
    printf("%-10.2f\n\n", pot);

    while (x < 20)//Resposta D
    {
        x += 1;
        printf("%d", x);

        if (x % 5 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
        
        
    }


    for (x = 1; x <= 20; x++)//Resposta E
    {
        printf("%d", x);

        if (x % 5 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("\t");
        }
        
    }
    
    

    return 0;
}
