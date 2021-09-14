/* Fig. F.2: figF_02.c 
   The insertion sort algorithm. */
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function prototypes */
void insertionSort( int array[], int length );
void printPass( int array[], int length, int pass, int index );

int main( void )
{
   int array[ SIZE ]; /* declare the array of ints to be sorted */
   int i; /* int used in for loop */
    
   srand( time( NULL ) ); /* seed the rand function */
    
   for ( i = 0; i < SIZE; i++ )
      array[ i ] = rand() % 90 + 10; /* give each element a value */
        
   printf( "Unsorted array:\n" );
    
   for ( i = 0; i < SIZE; i++ ) /* print the array */
      printf( "%d  ", array[ i ] );
        
   printf( "\n\n" );
   insertionSort( array, SIZE );
   printf( "Sorted array:\n" );
    
   for ( i = 0; i < SIZE; i++ ) /* print the array */
      printf( "%d  ", array[ i ] );
        
   return 0;
} /* end function main */

/* function that insertion sorts the array */
void insertionSort( int array[], int length )
{
   int insert; /* temporary variable to hold element to insert */
   int i; /* int used in for loop */
    
   /* loop over length - 1 elements */
   for ( i = 1; i < length; i++ ) {
       int moveItem = i; /* initialize location to place element */
       insert = array[ i ];
        
       /* search for place to put current element */
       while ( moveItem > 0 && array[ moveItem - 1 ] > insert ) {
          /* shift element right one slot */
          array[ moveItem ] = array[ moveItem - 1 ];
          --moveItem;
       } /* end while */
       
       array[ moveItem ] = insert; /* place inserted element */
       printPass( array, length, i, moveItem );
   } /* end for */
} /* end function insertionSort */

/* function that prints a pass of the algorithm */
void printPass( int array[], int length, int pass, int index )
{
   int i; /* int used in for loop */
    
   printf( "After pass %2d: ", pass );
    
   /* output elements till selected item */
   for ( i = 0; i < index; i++ )
      printf( "%d  ", array[ i ] );
       
   printf( "%d* ", array[ index ] ); /* indicate swap */
    
   /* finish outputting array */
   for ( i = index + 1; i < length; i++ )
        printf( "%d  ", array[ i ] );
        
    printf( "\n               " ); /* for alignment */
    
    /* indicate amount of array that is sorted */
    for ( i = 0; i <= pass; i++ )
        printf( "--  " );
    
    printf( "\n" ); /* add newline */
} /* end function printPass */


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
