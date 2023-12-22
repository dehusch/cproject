/*4.17 Calculando limites de crédito. Poupar dinheiro
vem se tornando algo cada vez mais difícil de se fazer
durante períodos de recessão, de modo que as empresas
podem estreitar seus limites de crédito para impedir que
suas contas a receber (dinheiro devido a elas) se tornem
muito grandes. Em resposta a uma recessão prolongada,
uma empresa cortou os limites de crédito de seus
clientes pela metade. Assim, se um cliente em particular
tinha um limite de crédito de R$ 2.000,00, agora
ele é de R$ 1.000,00. Se um cliente tinha um limite de
R$ 5.000,00, agora ele é de R$ 2.500,00. Escreva um
programa que analise o status de crédito de três clientes
dessa empresa. Você receberá as seguintes informações:

a) O número de conta do cliente.
b) O limite de crédito do cliente antes da recessão.
c) O saldo atual do cliente (ou seja, o valor que o cliente
deve à empresa).

Seu programa deve calcular e imprimir o novo limite de
crédito para cada cliente e deve determinar (e imprimir)
quais clientes têm saldo atual superior a seus novos limites
de crédito.

*/

/*Create a list of customers and calculate a Customer Credit
The actual Credit for a customer is $2000,00 and
over the new recession the actual Credit for each Customer
will be half! Terminated the program when press0 in customer number
and after that show a list of all customer and what is the actual balance of each customer*/

#include <stdio.h>

int main(){

    int customer_number = 0;
    float actual_credit = 0;
    float new_credit = 0;
    float actual_balance = 0;
    float new_balance = 0;
    int i = 0;

    printf("Enter the customer number: ");
    scanf("%d", &customer_number);

    while(customer_number != 0){

        printf("Enter the actual credit: ");
        scanf("%f", &actual_credit);
        printf("Enter the actual balance: ");
        scanf("%f", &actual_balance);

        new_credit = actual_credit / 2;
        new_balance = actual_balance - new_credit;

        printf("The new credit is: %.2f\n", new_credit);
        printf("The new balance is: %.2f\n", new_balance);

        if(new_balance > new_credit){
            printf("The customer %d has a balance greater than the new credit\n", customer_number);
        }

        i++;
        printf("Enter the customer number: ");
        scanf("%d", &customer_number);
    }

    printf("The total of customers is: %d\n", i);

    return 0;
}