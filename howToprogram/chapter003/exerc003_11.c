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
	
	while (x <= 10){
		total += x;
		++x;
		printf("total = %d\n", total);
		printf("X = %d\n", x);
	}

	return 0;
}
//ANSWERS
/*
A - remove ; at the end of line.
B - Nothing was wrong besides a fundamental rule that you should add a value to total integer.


*/
