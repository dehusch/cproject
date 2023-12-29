#include <stdio.h>

int main()
{
     int i = 0;

     while (i != 0) //EXECUTA E DEPOIS VERIFICA SE A CONDICAO E VERDADEIRA
                    // SE NAO FOR VERDADEIRA ELE PARA DE EXECUTAR O BLOCO DE CODIGO e vai para o proximo bloco de codigo.
                    //SE FOR VERDADEIRA ELE EXECUTA O BLOCO DE CODIGO
     {
         printf("Teste");
     }

     do {  //VERIFICA E DEPOIS EXECUTA O BLOCO DE CODIGO E DEPOIS VERIFICA SE A CONDICAO E VERDADEIRA
        printf("Teste2");
     } while (i !=0); //ENQUANTO A CONDICAO NAO MUDA, ELE PARA  DE EXECUTAR O BLOCO DE CODIGO   

    return 0;
}
