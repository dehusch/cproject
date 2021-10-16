/*
Calculadora de economias com o transporte
solidário. Pesquise diversos websites sobre transporte
solidário com carros de passeio. Crie uma aplicação
que calcule a sua despesa diária com o automóvel, para
que você possa estimar quanto dinheiro poderia economizar
com o transporte solidário, que também tem
outras vantagens, como reduzir as emissões de carbono
e os congestionamentos. A aplicação deverá solicitar as
seguintes informações, e exibir os custos com o trajeto
diário ao trabalho:
a) Total de quilômetros dirigidos por dia.
b) Custo por litro de combustível.
c) Média de quilômetros por litro.
d) Preço de estacionamento por dia.
e) Gastos diários com pedágios.
*/
#include <stdio.h>

int main(){

    float km;
    float comb;
    float kmXlitro;
    float park;
    float tax;
    float total;

    printf("Total de quilometros: ");
    scanf("%f", &km);

    printf("Preço Combustível: ");
    scanf("%f", &comb);

    printf("Media KM por litro: ");
    scanf("%f", &kmXlitro);

    printf("Valor Estacionamento: ");
    scanf("%f", &park);

    printf("Taxa Pedagio: ");
    scanf("%f", &tax);
    
    total = km / (kmXlitro / comb);

    printf("%f", total);
    return 0;

}