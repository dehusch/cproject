#include <stdio.h>

int main()
{
     int i = 0;

     while (i != 0) #EXECUTA E DEPOIS VERIFICA
     {
         printf("Teste");
     }

     do {   #VERIFICA E DEPOIS EXECUTA
        printf("Teste2");
     } while (i !=0); #ENQUANTO A CONDICAO NAO MUDA, ELE PARA

    return 0;
}
