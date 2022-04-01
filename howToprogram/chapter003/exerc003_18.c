/*
Calculadora de limite de crédito. Desenvolva um
programa em C que determine se um cliente de uma
loja de departamentos excedeu seu limite de crédito. Os
seguintes fatos estão disponíveis para cada cliente:
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os encargos desse cliente nesse mês.
d) Total de todos os créditos aplicados à conta desse
cliente nesse mês.
e) Limite de crédito autorizado.

O programa deverá ler cada um desses fatos, calcular o
novo saldo (= saldo inicial + encargos - créditos)
e determinar se o novo saldo é superior ao limite de
crédito do cliente. Para os clientes cujo limite de crédito
foi ultrapassado, o programa deverá exibir o número
de conta do cliente, o limite de crédito, o novo saldo e
a mensagem ‘Limite de crédito ultrapassado’. Veja um
exemplo do diálogo de entrada/saída:


Informe o número da conta (-1 para terminar):
100
Informe o saldo inicial: 5394,78
Informe o total de encargos: 1000,00
Informe o total de créditos: 500,00
Informe o limite de crédito: 5500,00
Conta: 100
Limite de crédito: 5500,00
Saldo: 5894,78
Limite de crédito ultrapassado.
Informe número da conta (-1 para terminar): 200
Informe o saldo inicial: 1000,00
Informe o total de encargos: 123,45
Informe o total de créditos: 321,00
Informe o limite de crédito: 1500,00
Informe número da conta (-1 para terminar): 300
Informe o saldo inicial: 500,00
Informe o total de encargos: 274,73
Informe o total de créditos: 100,00
Informe o limite de crédito: 800,00
Informe número da conta (-1 para terminar): -1
*/

#include<stdio.h>

int conta = 0;
float saldoI = 0;
float totalE = 0;
float totalC = 0;
float limiteC = 0;
float saldoC = 0



int main(){
    printf("Digite o numero da conta (-1 exit): ");
    scanf("%d", &conta);
    
    while (conta != -1)
    {
        printf("Digite o saldo: ");
        scanf("%f", &saldoI);
        printf("Digite o total de encargos: ");
        scanf("%f", &totalE);
        printf("Digite o total de creditos: ");
        scanf("%f", &totalC);

        saldoC = saldoI + totalE - totalC
        
        printf("Digite o numero da conta (-1 exit): ");
        scanf("%d", &conta);
    }
    

    printf("Saldo: %.2f, Encargos: %.2f, Credito: %.2f Saldo Corrigido: %.2f", saldoI, totalE, totalC, saldoC);
    return 0;
}