/*
Consumo de gasolina. Os motoristas se preocupam
com o consumo de combustível de seus automóveis.
Um motorista manteve um registro do número de abastecimentos
que fez, registrando também o número de
quilômetros rodados e de litros obtidos a cada abastecimento.
Desenvolva um programa que peça o número de
quilômetros dirigidos e a quantidade de litros obtidos a
cada abastecimento. O programa deverá calcular e exibir
a quantidade de quilômetros rodados por litros usados.
Depois de processar toda a informação, o programa deverá
calcular e exibir o total combinado de quilômetros
por litro para todos os abastecimentos. Veja um exemplo
do diálogo de entrada/saída:
*/

/*
Informe quantos litros abasteceu (-1 para terminar): 25,6
Informe quantos km dirigiu: 287
O consumo atual é de 11,210937 km/l

Informe quantos litros abasteceu (-1 para terminar):20,6
Informe quantos km dirigiu: 200
O consumo atual é de 9,708738 km/l

Informe quantos litros abasteceu (-1 para terminar):10
Informe quantos km dirigiu: 120
O consumo atual é de 12,000000 km/l

Informe quantos litros abasteceu (-1 para terminar):
-1
O consumo geral foi de 10,800712 km/l
*/

#include<stdio.h>

float litros = 0;
float km = 0;
float consumo = 0;
float somaCon = 0;
float media = 0;
float contador = 0;

int main(){
    while (litros != -1)
    {
        printf("Informe quantos litros consumiu: ");
        scanf("%f", &litros);
        printf("Informe quantos km dirigiu: ");
        scanf("%f", &km);
        consumo = km / litros;
        printf("O consumo é de %.2fkm/l\n\n", consumo);
        somaCon = somaCon + consumo;
        media = somaCon / contador;
        contador++;
        
    }

    printf("Media = %.2f\n", media);

    return 0;
}



