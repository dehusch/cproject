#include<stdio.h>

int main(void){

	long double pi = 0.0;/* approximated value for pi */
	long double num = 4.0;/* numerator */
	long double denom = 1.0; /* denominator of current term */
	long int loop;/* loop counter */
	long int accuracy;/* number of terms */
	accuracy = 400000; /* set decimal accuracy */
	
	/* display table headers */
	printf( "Accuracy set at: %ld\n", accuracy );
	printf( "term\t\t pi\n" );
	
	/* loop through each term */
	for ( loop = 1; loop <= accuracy; loop++ ) {/* if odd-numbered term, add current term */
		if ( loop % 2 != 0 ) {
		pi += num / denom;
		} /* end if */
		
		else { /* if even-numbered term, subtract current term */
		pi -= num / denom;
		} /* end else */
	
		/* display number of terms and approximated
		value for pi with 8 digits of precision */
		
		printf( "%ld\t\t%Lf\n", loop, pi );
		denom += 2.0; /* update denominator */
	} /* end for */

	
	return 0; /* indicate successful termination */
} /* end main */
