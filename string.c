/*A declaração de uma string em C é feita da seguinte forma:

char <nome_da_string>[tamanho];

Ex:

char nome[16];

char sobrenome[31];

char frase[101];

Ao criarmos uma string em C, temos que nos atentar ao seu tamanho, 
pois a última posição da string é reservada pelo compilador, que 
atribui o valor “\0” para indicar o final da sequência. Portanto, 
a string nome[16] apresenta 15 “espaços” disponíveis para serem 
preenchidos.

A atribuição de valores à string pode ser feita no momento da 
declaração de duas formas: (i) entre chaves informando cada 
caractere, separados por vírgula (igual aos outros tipos de 
vetores); e (ii) atribuindo a palavra (ou frase) entre aspas 
duplas.

Exemplos:

char nome[16]={'J','o','a','o'};

char sobrenome[31] = "Alberto Gomes";
*/

#include<stdio.h>

int main(){
    
    char nome[16];

    printf("\n Digite um nome:");

    scanf("%s", nome);

    printf("\n Nome digitado: %s\n", nome);

    /*
    Essa forma de atribuição tem uma limitação: só é possível 
    armazenar palavras simples; compostas, não. Isso acontece 
    porque a função scanf() interrompe a atribuição quando 
    encontra um espaço em branco. Para contornar essa limitação, 
    uma opção é usar a função fgets(), que também faz parte do pacote 
    padrão <stdio.h>. Essa função apresenta a seguinte sintaxe:

    fgets(destino,tamanho,fluxo);

    O destino especifica o nome da string que será usada para armazenar 
    o valor lido do teclado. O tamanho deve ser o mesmo da declaração 
    da string. O fluxo indica de onde está vindo a string, no nosso 
    caso, sempre virá do teclado, portanto usaremos stdin (standard input).

    */

    return 0;
}