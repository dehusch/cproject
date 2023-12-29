#include <stdio.h>

int main()
{
     int i = 0;

     while (i != 0) //EXECUTA E DEPOIS VERIFICA
     {
         printf("Teste");
     }
     printf("i = %d\n", i);

     do {  //VERIFICA E DEPOIS EXECUTA
        printf("Teste2");
     } while (i !=0); //ENQUANTO A CONDICAO NAO MUDA, ELE PARA

    printf("i = %d\n", i);
    return 0;
}
