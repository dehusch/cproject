/*3.21 Calculadora de salário. Desenvolva um programa
que determine o salário semanal bruto de vários funcionários.
A empresa paga ‘uma hora normal’ para cada
funcionário pelas primeiras 40 horas trabalhadas, ‘uma
hora normal e meia’ por hora trabalhada a partir de 40
horas. Você recebe uma lista de funcionários da empresa,
o número de horas que cada funcionário trabalhou
na semana anterior e o valor ganho por hora de cada
funcionário. Seu programa deverá ler essas informações
para cada funcionário e determinar e exibir o salário que
cada um deverá receber. Aqui está um exemplo do diálogo
de entrada/saída:
*/

//EXEMPLO

/*
Digite # de horas trabalhadas (-1 para terminar):
39
Digite o salário por hora do funcionário
(R$00,00): 10,00
Salário é de R$390,00
Digite # de horas trabalhadas (-1 para terminar):
40
Digite o salário por hora do funcionário
(R$00,00): 10,00
Salário é de R$400,00
Digite # de horas trabalhadas (-1 para terminar):
41
Digite o salário por hora do funcionário
(R$00,00): 10,00
Salário é de R$415,00
Digite # de horas trabalhadas (-1 para terminar):-1
*/
#include<stdio.h>

double horasN;
double horasE;
double salario;

