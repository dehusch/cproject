/*
3.11 Identifique e corrija os erros dos seguintes trechos e có-
digos: [Nota: pode haver mais de um erro em cada um.]
a) 	if ( idade >= 65 );
 		printf( “Idade é maior ou igual a 65\n” );
	else
	printf( “Idade é menor que 65\n” );
	
b) int x = 1, total;
	while ( x <= 10 ){
		total += x;
		++x;
	}
c)	while ( x <= 100 )
		total += x;
		++x;
d)	while ( y > 0 ) {
		printf( “%d\n”,
 		y );
		++y;
	}
*/

#include <stdio.h>

int idade = 1;
int x = 1;
int y = 1, total;



int main(){
	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if (idade >= 65)
		printf("Idade é maior ou igual a 65\n");
	else
		printf("Idade é menor que 65\n");
	//B Answer
	while (x <= 10){
		total += x;
		++x;
		printf("total = %d\n", total);
		printf("X = %d\n", x);
	}
	//C Answer
	while (x <= 100){
		total += x;
		printf("total = %d\n", total);
		++x;
		printf("X = %d\n", x);

	}
	//D Answer
	printf("Digite qualquer dezena: ");
	scanf("%d", &y);

	while (y > 0){
		--y;
		printf("Y= %d\n", y);

	}
	

	return 0;
}
//ANSWERS
/*
A - remove ; at the end of line.

B - Nothing was wrong besides a 
fundamental rule that you should add a value to total integer.

C - Add { }.

D - Se colocar nessa condição, entra loop infinito.

*/
