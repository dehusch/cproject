#include<stdio.h>
	int main( void ){
		int line; /* line counter */
		int space;/* space counter */
		int asterisk; /* asterisk counter */
		int size;/* number of rows in diamond */

		/* prompt for diamond size */

		printf( "Enter an odd number for the diamond size ( 1-19 ):\n" );
		scanf( "%d", &size );
		
		/* top half */
		for ( line = 1; line <= size -2; line += 2 ) {
			/* print preceding spaces */
			for ( space = ( size - line ) / 2; space > 0; space-- ) {
				printf( " " );
			} /* end for */
		/* print asterisks */
			for ( asterisk = 1; asterisk <= line; asterisk++ ) {
				printf( "*" );
			} /* end for */
		
		printf( "\n" );
		} /* end for */
		
		
		/* bottom half */
		for ( line = size; line >= 0; line -= 2 ) {
			/* print preceding spaces */
			for ( space = ( size - line ) / 2; space > 0; space-- ) {
			printf( " " );
			} /* end for */
			/* print asterisks */
			for ( asterisk = 1; asterisk <= line; asterisk++ ) {
			printf( "*" );
			} /* end for */
			printf( "\n" );
		} /* end for */
	
		return 0; /* indicate successful termination */
	/* end main */
