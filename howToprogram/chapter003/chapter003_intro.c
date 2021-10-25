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

//***********************
//Estrutura de seleção IF
//***********************

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

    printf( "%s\n", nota >= 6 ? "Parabens" : "Tem que melhorar!" );

//********************************
//A estrutura de seleção if...else
//********************************
/*
O comando de seleção if executa uma ação indicada somente quando a 
condição é verdadeira; caso contrário, a ação é desprezada. A 
estrutura de seleção if...else permite que você determine que uma 
ação deve ser executada quando a condição for verdadeira,e não 
quando a condição for falsa. 

Por exemplo, o comando de pseudocódigo:

    Se a nota do aluno for maior ou igual a 60
        Imprima ‘Aprovado’
    se não
        Imprima ‘Reprovado’
*/

    int media;

    printf("Digite a media do aluno: ");
    scanf("%d", &media);

    if ( media >= 6 ) {
        printf( "Aprovado\n" );
    } /* fim do if */
    else {
        printf( "Reprovado\n" );
    } /* fim do else */

//*************************************
//C oferece o operador condicional (?:)
//*************************************

/*
É muito semelhante ao comando if...else. O operador condicional é o único 
operador ternário de C — ele aceita três operandos. Os operandos, com o 
operador condicional, formam uma expressão condicional. O primeiro 
operando é uma condição; o segundo operando é o valor para a expressão 
condicional inteira, se a condição for verdadeira; e o terceiro operando 
é o valor para a expressão condicional inteira se a condição for falsa. 

Por exemplo, o comando printf:
*/

    printf( "%s\n", nota >= 6 ? "Parabens" : "Tem que melhorar!" );

/*
O segundo e o terceiro operandos em uma expressão condicional também podem 
ser ações a serem executadas. Por exemplo, a expressão condicional:
*/
    nota >= 6 ? printf( "Sua nota foi maior ou igual a 6\n" ) : printf( "Sua nota foi menor que 6\n" );

//****************
//Repeticao WHILE
//****************

/*
Uma estrutura de repetição permite que você especifique que uma ação deverá
ser repetida enquanto alguma condição perma necer verdadeira. 

A estrutura em pseudocódigo descreve a repetição que ocorre durante uma ida 
às compras:

    Enquanto houver mais itens na minha lista de compras
        Comprar próximo item e riscá-lo da minha lista

*/

    int produto = 3;
    while ( produto <= 100 ) {
        produto = 3 * produto;
    } /* fim do while */
    
    printf("O produto é %d\n", produto);


/*
    Define total como zero
    Define contador de notas como um
    Enquanto contador de notas é menor ou igual a dez
        Lê a próxima nota
        Soma a nota ao total
        Soma um ao contador de notas
    Define a média da turma como o total dividido por dez
    Imprime a média da turma
*/



    int cont; /* número da nota a digitar em seguida */
    int score;/* valor da nota */
    int total;/* soma das notas inseridas pelo usuário */
    int med;/* média das notas */

    /* fase de inicialização */

    total = 0;/* inicializa total */

    cont = 1; /* inicializa contador do loop */

    /* fase de processamento */

    while ( cont <= 10 ) {/* loop 10 vezes */
        printf( "Digite a nota: " ); /* prompt para inserção */
        scanf( "%d", &score );/* lê a nota do usuário */
        total = total + score;/* soma nota ao total */
        cont = cont + 1;/* incrementa contador */

    } /* fim do while */

/* fase de término */

    med = total / 10; /* divisão de inteiros */

    printf( "Média da turma é %d\n", med ); /* exibe resultado */

    return 0; /* indica que programa foi concluído com sucesso */


}
