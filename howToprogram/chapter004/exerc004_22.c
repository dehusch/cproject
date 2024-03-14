#include<stdio.h>
// Programa: Exercicio 4.22
// Exercicio 4.22
// Modifique a figura 4.7 para que calcule a media dos alunos usando switch
//

int main() {
    int total;
    int contador;
    int nota;
    int media;
    int aContador;
    int bContador;
    int cContador;
    int dContador;
    int fContador;

    total = 0;
    contador = 1;
    aContador = 0;
    bContador = 0;
    cContador = 0;
    dContador = 0;
    fContador = 0;

    while(contador <= 10) {
	printf("Digite a nota do aluno: ");
	scanf("%d", &nota);
	total = total + nota;
	contador = contador + 1;

	switch(nota / 10) {
	    case 9:
	    case 10:
		++aContador;
		break;
	    case 8:
		++bContador;
		break;
	    case 7:
		++cContador;
		break;
	    case 6:
		++dContador;
		break;
	    default:
		++fContador;
		break;
	}
    }

    media = total / 10;
    printf("A media da turma e %d\n", media);
    printf("A quantidade de alunos com nota A e %d\n", aContador);
    printf("A quantidade de alunos com nota B e %d\n", bContador);
    printf("A quantidade de alunos com nota C e %d\n", cContador);
    printf("A quantidade de alunos com nota D e %d\n", dContador);
    printf("A quantidade de alunos com nota F e %d\n", fContador);

    return 0;
}
