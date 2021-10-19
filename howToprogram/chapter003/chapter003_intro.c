//ALGORITMO
/*
Um dos procedimentos utilizados para resolver um problema em termos:
1. das ações a serem executadas
2. da ordem em que essas ações devem ser executadas
Chamamos isso de Algoritmo

Especificar a ordem em que os comandos devem ser executados em um 
programa de computador é chamado de controle do programa. 
*/

//PSEUDOCODIGO

/*
O pseudocódigo é uma linguagem artificial e informal que ajuda 
os programadores a desenvolver algoritmos. O pseudocódigo que
apresentamos aqui é útil para desenvolver algoritmos que serão
convertidos em programas estruturados em C. Ele é semelhante à
linguagem do dia a dia; é conveniente e fácil de usar,

O pseudocódigo consiste somente em comandos executáveis — aqueles 
que são executados quando o programa é convertido de
pseudocódigo para C e, depois, executado em C. As definições não 
são comandos executáveis. Elas são mensagens para o compilador.
Por exemplo:

int i;

Não tem nenhuma ação. É apenas uma variavel.

Alguns programadores escolhem listar as variáveis e mencionar brevemente 
o propósito de cada uma no início de um programa em pseudocódigo.

*/

//Estruturas de controle

/*
Em um programa, normalmente, os comandos são executados um após do outro, 
na sequência em que estiverem escritos. Isso é chamado de execução sequencial

C oferece três tipos de estruturas de seleção em forma de comandos. A 
estrutura de seleção if (Seção 3.5) tanto executa (seleciona) uma ação, 
se uma condição for verdadeira, quanto ‘pula’ a ação, se a condição for 
falsa. A estrutura de seleção if...else (Seção 3.6) executa uma ação, 
se uma condição for verdadeira, e executa uma ação diferente, se a 
condição for falsa. O comando de seleção switch (a ser discutido no 
Capítulo 4) executa uma das muitas ações diferentes que dependem do 
valor de uma expressão. O comando if é chamado de comando de seleção 
única, pois seleciona ou ignora uma única ação. O comando if...else é 
um comando de seleção dupla, pois seleciona uma dentre duas ações 
diferentes. O comando switch é chamado de comando de seleção múltipla,
pois seleciona a ação a ser executada dentre muitas ações diferentes.
C fornece três tipos de estruturas de repetição em forma de comandos, 
a saber: while (Seção 3.7), do...while e for (esses dois
últimos serão abordados no Capítulo 4).

Bem, isso é tudo! C tem apenas sete estruturas de controle: 
- sequência (Execução Sequencial)
- três tipos de seleção (IF, IF...ELSE, SWITCH).
- três tipos de repetição. (DO, DO...WHILE, FOR).

IF = Comando de seleção única
IF...ELSE =  comando de seleção dupla
SWITCH =  comando de seleção multipla

Qualquer programa em C que tenhamos de montar pode ser construído a 
partir de apenas sete tipos de comandos de controle combinados de duas 
maneiras. Isso é a essência da simplicidade.
*/

//Estrutura de seleção IF
/*
As estruturas de seleção são usadas na escolha entre cursos de ação 
alternativos. Por exemplo, suponha que a nota de corte em um exame 
seja 60. 

O comando em pseudocódigo:

Se a nota do aluno for maior ou igual a 60
    Imprima ‘Aprovado’

Se a condição é verdadeira, então a palavra ‘Aprovado’ é impressa, 
e o próximo comando na sequência do pseudocódigo é ‘executado’ 
(lembre-se de que o pseudocódigo não é uma autêntica linguagem de 
programação). Se a condição é falsa, o comando de impressão é ignorado 
e o próximo comando na sequência do pseudocódigo é executado. 

Há um recuo na segunda linha dessa estrutura de seleção. Tal recuo é 
opcional, mas altamente recomendado, pois enfatiza a estrutura inerente 
aos programas estruturados. É aconselhavél aplicar as convenções de 
recuo no texto. O compilador de C ignora caracteres de espaçamento, como 
caracteres em branco, pontos de tabulação e caracteres de nova linha, 
usados para recuo e espaçamento vertical.
*/
#include <stdio.h>

int main(){

    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if ( nota >= 6 ) {
        printf( "Aprovado\n" );
    }/* fim do if */

}


