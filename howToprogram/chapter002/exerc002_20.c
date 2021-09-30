/*
2.20
Diâmetro, circunferência e área de um círculo.
Escreva um programa que leia o raio de um círculo e
informe o diâmetro, a circunferência e a área do círculo.
Utilize o valor constante 3,14159 para p. Realize cada
um desses cálculos dentro das instruções printf e use
o especificador de conversão %f. [Nota: neste capítulo,
discutimos apenas constantes e variáveis inteiras. No Ca-
pítulo 3, discutiremos os números em ponto flutuante,
ou seja, valores que podem ter pontos decimais.]
*/

#include <stdio.h>

int main(){

    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("O diametro é: %f\n", raio * 2);
    printf("O Perimetro é: %f\n", (raio * 3.14159) * 2);

}