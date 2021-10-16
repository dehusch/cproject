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

    int km;
    int comb;
    int kmXlitro;
    int park;
    int tax;
    int total;

    printf("Total de quilometros: ");
    scanf("%d", &km);

    printf("Preço Combustível: ");
    scanf("%d", &comb);

    printf("Media KM por litro: ");
    scanf("%d", &kmXlitro);

    printf("Valor Estacionamento: ");
    scanf("%d", &park);

    printf("Taxa Pedagio: ");
    scanf("%d", &tax);
    
    total = (km / (kmXlitro / comb));

    printf("total")
    return 0;

}