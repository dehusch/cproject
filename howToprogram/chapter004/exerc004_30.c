/*
 * 4.304.31Substituindo switch por if...else. Reescreva o pro-
grama da Figura 4.7 substituindo a estrutura switch pela
estrutura if...else aninhada; tenha o cuidado de tra-
tar do caso default corretamente. Depois, reescreva essa
nova versão substituindo a estrutura if...else aninha-
da por uma série de estruturas if; aqui, também tenha
o cuidado de lidar com o caso default corretamente
(isso é mais difícil do que na versão do if...else
aninhado). Esse exercício demonstra que switch é
uma conveniência, e que qualquer estrutura switch
pode ser escrita apenas com instruções de seleção única.
*/

/* Exercise 4.30 Part A Solution */


#include <stdio.h>
	int main( void ){

		int grade;/* current grade */
		int aCount = 0; /* total A grades */
		int bCount = 0; /* total B grades */
		int cCount = 0; /* total C grades */
		int dCount = 0; /* total D grades */
		int fCount = 0; /* total F grades */
		/* prompt user for grades */
		
		printf( "Enter the letter grades." );
		printf( " Enter the EOF character to end input:\n" );
		
		/* while EOF not entered by user */
		while ( ( grade = getchar() ) != EOF ) {
			/* Update count for appropriate grade */
			if ( grade == 'A' || grade == 'a' ) {
				++aCount;
			}/* end if */
			else if ( grade == 'B' || grade == 'b' ) {
				++bCount;
			} /* end else if */
			else if ( grade == 'C' || grade == 'c' ) {
				++cCount;
			} /* end else if */
			else if ( grade == 'D' || grade == 'd' ) {
				++dCount;
			} /* end else if */
			else if ( grade == 'F' || grade == 'f' ) {
				++fCount;
			} /* end else if */
			else if ( grade == '\n' || grade == ' ' ) {
				;
		 	/* empty body */
			} /* end else if */
			else {
				printf( "Incorrect letter grade entered." );
				printf( " Enter a new grade.\n" );
			}/* end else */
		} /* end while */
		
		/* display totals for each grade */
		printf( "\nTotals for each letter grade were:\n" );
		printf( "A: %d\n", aCount );
		printf( "B: %d\n", bCount );
		printf( "C: %d\n", cCount );
		printf( "D: %d\n", dCount );
		printf( "F: %d\n", fCount );
		
		return 0; /* indicate successful termination */
	}/* end main */
