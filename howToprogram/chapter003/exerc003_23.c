/*
Imprimindo números por um loop. Escreva um
programa que utilize o looping para imprimir os números
de 1 a 10 lado a lado na mesma linha, com três espaços
entre os números.
*/
#include<stdio.h>

/*
Explicando o FOR;

O comando:
for (int i = 1; i < 11; i++){   
}

int i = 1;
Aqui a variavel "int i" não necessita ser declarada antecipadamente.

i < 11;
Este é loop definido, ou seja, a repetição irá até 10 vees.

i++;
Ele irá pós incrementar + 1 a cada loop executado.
Se eu definir "i = 2 * i" ele irá mutiplicar por 2 o valor de i a cada repetição
*/


int main()
{
    for (int i = 1; i < 10; i++){
        printf("%d   ", i);
    }
    
    return 0;
}
