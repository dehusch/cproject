/*
Explicando o Switch e getchar

Ocasionalmente, um algoritmo conterá uma série de decisões 
em que uma variável, ou expressão, será testada separadamente 
para cada um dos valores inteiros constantes que ela possa vir 
a assumir, e diferentes ações serão tomadas. Isso é chamado de 
seleção múltipla. C nos oferece a estruturade seleção múltipla 
switch para lidar com essa tomada de decisão.

O getchar le um caractere do teclado e armazena em uma variavel
inteira.

*/
#include <stdio.h>

int main()
{
    int ch = 0;
    //Podemos definir a variavel ch assim: char ch;

    printf("Digite algum caracter: ");

    ch = getchar();

    printf("\n A tecla pressionada '%c' representa o valor %d na tabela ASCII.\n", ch, ch);

}