//For compile a program use cc
//cc -o execname filename.c
#include <stdio.h>
#include <stdlib.h>

//Exemplo de mudança de variavel dentro do printf
int a = 10;
int b = 20;

int main(int argc, char *argv[])
{
    printf("\n\nMudando o tipo da variavel no printf %f\n\n", (float)a / b);
    puts("Bem vindo");
    puts("\t a linguagem C!");
    printf("O printf continua ");
    printf("na mesma linha, e o puts nao!\n");
    printf("Qual\n\tVoce\n\t\tacha\n\t\t\tMelhor?\n");
    return 0;
}
//Precedentes de operadores
//  ()            Da esquerda para a direita
//  * /  %        Da esquerda para a direita
//  + -           Da esquerda para a direita
//  < <= > >=     Da esquerda para a direita
//  == !=         Da esquerda para a direita
//  =             Da direita para a esquerda

//Opções para condições IF...ELSE
//  Not (!)	    !(a == 3)	        True se não for igual a 3
//  And (&&)	a == 3 && b == 6	True se for igual a 3 e b igual a 6
//  Or (||)	    a == 2 || b == 4	True se a for igual a 2 ou b igual 4

//Palavras chave
//  auto double int struct
//  break else long switch
//  case enum register typedef
//  char extern return union
//  const float short unsigned
//  continue for signed void
//  default goto sizeof volatile
//  do if static while
// \t insere uma tabulação no texto