/* Fig. F.3: figF_03.c
   The merge sort algorithm. */
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function prototypes */
void mergeSort( int array[], int length );
void sortSubArray( int array[], int low, int high );
void merge( int array[], int left, int middle1, int middle2, int right );
void displayElements( int array[], int length );
void displaySubArray( int array[], int left, int right );

int main( void )
{
   int array[ SIZE ]; /* declare the array of ints to be sorted */
   int i; /* int used in for loop */
    
   srand( time( NULL ) ); /* seed the rand function */
    
   for ( i = 0; i < SIZE; i++ )
      array[ i ] = rand() % 90 + 10; /* give each element a value */
        
   printf( "Unsorted array:\n" );
   displayElements( array, SIZE ); /* print the array */
   printf( "\n\n" );
   mergeSort( array, SIZE ); /* merge sort the array */
   printf( "Sorted array:\n" );
   displayElements( array, SIZE ); /* print the array */
   return 0;
} /* end function main */

/* function that merge sorts the array */
void mergeSort( int array[], int length )
{
   sortSubArray( array, 0, length - 1 );
} /* end function mergeSort */

/* function that sorts a piece of the array */
void sortSubArray( int array[], int low, int high )
{
   int middle1, middle2; /* ints that record where the array is split */
    
   /* test base case: size of array is 1 */
   if ( ( high - low ) >= 1 ) { /* if not base case... */
      middle1 = ( low + high ) / 2;
      middle2 = middle1 + 1;

      /* output split step */
      printf( "split:   " );
      displaySubArray( array, low, high );
      printf( "\n         " );
      displaySubArray( array, low, middle1 );
      printf( "\n         " );
      displaySubArray( array, middle2, high );
      printf( "\n\n" );

      /* split array in half and sort each half recursively */
      sortSubArray( array, low, middle1 ); /* first half */
      sortSubArray( array, middle2, high ); /* second half */

      /* merge the two sorted arrays */
      merge( array, low, middle1, middle2, high );
   } /* end if */
} /* end function sortSubArray */

/* merge two sorted subarrays into one sorted subarray */
void merge( int array[], int left, int middle1, int middle2, int right )
{
   int leftIndex = left; /* index into left subarray */
   int rightIndex = middle2; /* index into right subarray */
   int combinedIndex = left; /* index into temporary array */
   int tempArray[ SIZE ]; /* temporary array */
   int i; /* int used in for loop */

   /* output two subarrays before merging */
   printf( "merge:   " );
   displaySubArray( array, left, middle1 );
   printf( "\n         " );
   displaySubArray( array, middle2, right );
   printf( "\n" );

   /* merge the subarrays until the end of one is reached */
   while ( leftIndex <= middle1 && rightIndex <= right ) {
      /* place the smaller of the two current elements in result */
      /* and move to the next space in the subarray */
      if ( array[ leftIndex ] <= array[ rightIndex ] )
         tempArray[ combinedIndex++ ] = array[ leftIndex++ ];
      else
         tempArray[ combinedIndex++ ] = array[ rightIndex++ ];
   } /* end while */
    
   if ( leftIndex == middle2 ) { /* if at end of left subarray ... */
      while ( rightIndex <= right ) /* copy the right subarray */
         tempArray[ combinedIndex++ ] = array[ rightIndex++ ];
   } /* end if */
   else { /* if at end of right subarray... */
      while ( leftIndex <= middle1 ) /* copy the left subarray */
         tempArray[ combinedIndex++ ] = array[ leftIndex++ ];
   } /* end else */
    
   /* copy values back into original array */
   for ( i = left; i <= right; i++ )
      array[ i ] = tempArray[ i ];
    
   /* output merged subarray */
   printf( "         " );
   displaySubArray( array, left, right );
   printf( "\n\n" );
} /* end function merge */

/* display elements in array */
void displayElements( int array[], int length )
{
   displaySubArray( array, 0, length - 1 );
} /* end function displayElements */

/* display certain elements in array */
void displaySubArray( int array[], int left, int right )
{
   int i; /* int used in for loop */
    
   /* output spaces for alignment */
   for ( i = 0; i < left; i++ )
      printf( "   " );
    
   /* output elements left in array */
   for ( i = left; i <= right; i++ )
      printf( " %d", array[ i ] );
} /* end function displaySubArray */


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
