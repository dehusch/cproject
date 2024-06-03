/*
4.28
 Calculando o pagamento semanal. Uma empresa
paga a seus funcionários como gerentes (que recebem
um salário semanal fixo), trabalhadores por hora (que
recebem um salário fixo por hora até as 40 primeiras
horas de trabalho e ‘hora e meia’ — ou seja, 1,5 vez
o salário por hora — para horas extras trabalhadas),
trabalhadores comissionados (que recebem R$ 250,00
mais 5,7 por cento de suas vendas brutas semanais) ou
trabalhadores por unidade (que recebem um valor fixo
para cada um dos itens que eles produzem — cada tra-
balhador por unidade nessa empresa trabalha apenas em
um tipo de item). Escreva um programa que calcule o
pagamento semanal de cada empregado. Você não sabe
o número de empregados com antecedência. Cada tipo
de empregado tem seu próprio código de pagamento: ge-
rentes têm código 1, trabalhadores por hora têm código
2, trabalhadores comissionados têm código 3 e trabalha-
dores por unidade têm código 4. Use um switch para
calcular o pagamento de cada empregado com base no
seu código de pagamento. Dentro do switch, peça ao
usuário (ou seja, o funcionário administrativo da folha
de pagamento) que informe os fatos apropriados que seu
programa precisa para calcular o pagamento de cada em-
pregado com base no código.
*/

/* Exercise 4.28 Solution */
#include<stdio.h>
int main( void )
{
int payCode;
/* current employee's pay code */
int managers = 0; /* total number of managers */
int hWorkers = 0; /* total number of hourly workers */
int cWorkers = 0; /* total number of commission workers */
int pWorkers = 0; /* total number of pieceworkers */
int pieces;
/* current pieceworker's number of pieces */
double mSalary;
/* manager's salary */
double hSalary;
/* hourly worker's salary */
double cSalary;
/* commission worker's salary */
double pSalary;
/* pieceworker's salary */
double hours;
/* total hours worked */
double otPay;
/* overtime pay */
double otHours;
/* overtime hours */
double pay;
/* current employee's weekly pay */
/* prompt for first employee input */
printf( "Enter paycode ( -1 to end): " );
scanf( "%d", &payCode );
/* loop while sentinel value not read from user */
while ( payCode != -1 ) {
/* switch to appropriate computation according to pay code */
switch ( payCode ) {
/* pay code 1 corresponds to manager */
case 1:
/*prompt for weekly salary */
printf( "Manager selected.\n" );
printf( "Enter weekly salary: " );
scanf( "%lf", &mSalary );
/* manager's pay is weekly salary */
printf( "The manager's pay is $%.2f\n", mSalary );
++managers; /* update total number of managers */
break; /* exit switch */
/* pay code 2 corresponds to hourly worker */
case 2:
/* prompt for hourly salary */
printf( "Hourly worker selected.\n" );
printf( "Enter the hourly salary: " );
scanf( "%lf", &hSalary );
printf( "Enter the total hours worked: " );
scanf( "%lf", &hours );
/* pay fixed for up to 40 hours, 1.5 for hours over 40 */
if ( hours > 40.0 ) {
/* calculate OT hours and total pay */
otHours = hours - 40.0;
otPay = hSalary * 1.5 * otHours + hSalary * 40.0;
printf( "Worker has worked %.1f overtime hours.\n", otHours );
printf( "Workers pay is $%.2f\n", otPay );
} /* end if */
else { /* no overtime */
pay = hSalary * hours;
printf( "Worker's pay is $%.2f\n", pay );
} /* end else */
++hWorkers; /* update total number of hourly workers */
break; /* exit switch */
/* pay code 3 corresponds to commission worker */
case 3:
/* prompt for gross weekly sales */
printf( "Commission worker selected.\n" );
printf( "Enter gross weekly sales: " );
scanf( "%lf", &cSalary );
/* pay $250 plus 5.7% of gross weekly sales */
pay = 250.0 + 0.057 * cSalary;
printf( "Commission Worker's pay is $%.2f\n", pay );
++cWorkers; /* update total number of commission workers */
break; /* exit switch */
/* pay code 4 corresponds to pieceworker */
case 4:
/* prompt for number of pieces */
printf( "Piece worker selected.\nEnter number of pieces: " );
scanf( "%d", &pieces );
/* prompt for wage per piece */
printf( "Enter wage per piece: " );
scanf( "%lf", &pSalary );
pay = pieces * pSalary; /* compute pay */
printf( "Piece Worker's pay is $%.2f\n", pay );
++pWorkers; /* update total number of pieceworkers */
break; /* exit switch */
/* default case */
default :
printf( "Invalid pay code.\n" );
break;
} /* end switch */
/* prompt for next employee input */
printf( "\nEnter paycode ( -1 to end ): " );
scanf( "%d", &payCode );
} /* end while */
/* display total counts for each type of employee */
printf( "\n" );
printf( "Total number of managers paid: %d\n", managers );
printf( "Total number of hourly workers paid
: %d\n", hWorkers );
printf( "Total number of commission workers paid: %d\n", cWorkers );
printf( "Total number of piece workers paid
: %d\n", pWorkers );
return 0; /* indicate successful termination */
} /* end main */
