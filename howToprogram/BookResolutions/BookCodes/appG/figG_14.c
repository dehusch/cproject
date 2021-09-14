// Fig. G.14: figG_14.c
// Using variable-length arrays in C99
#include <stdio.h>

// function prototypes
void print1DArray( int size, int arr[ size ] );
void print2DArray( int row, int col, int arr[ row ][ col ] );

int main( void )
{
   int arraySize; // size of 1-D array
   int row1, col1, row2, col2; // number of rows and columns in 2-D arrays

   printf( "Enter size of a one-dimensional array: " );
   scanf( "%d", &arraySize );

   printf( "Enter number of rows and columns in a 2-D array: " );
   scanf( "%d %d", &row1, &col1 );

   printf( "Enter number of rows and columns in another 2-D array: " );
   scanf( "%d %d", &row2, &col2 );

   int array[ arraySize ]; // declare 1-D variable-length array
   int array2D1[ row1 ][ col1 ]; // declare 2-D variable-length array
   int array2D2[ row2 ][ col2 ]; // declare 2-D variable-length array

   // test sizeof operator on VLA
   printf( "\nsizeof(array) yields array size of %d bytes\n",
      sizeof( array ) );

   // assign elements of 1-D VLA
   for ( int i = 0; i < arraySize; i++ ) {
      array[ i ] = i * i;
   } // end for

   // assign elements of first 2-D VLA
   for ( int i = 0; i < row1; i++ ) {
      for ( int j = 0; j < col1; j++ ) {
         array2D1[ i ][ j ] = i + j;
      } // end for
   } // end for

   // assign elements of second 2-D VLA
   for ( int i = 0; i < row2; i++ ) {
      for ( int j = 0; j < col2; j++ ) {
         array2D2[ i ][ j ] = i + j;
      } // end for
   } // end for

   printf( "\nOne-dimensional array:\n" );
   print1DArray( arraySize, array ); // pass 1-D VLA to function

   printf( "\nFirst two-dimensional array:\n" );
   print2DArray( row1, col1, array2D1 ); // pass 2-D VLA to function

   printf( "\nSecond two-dimensional array:\n" );
   print2DArray( row2, col2, array2D2 ); // pass other 2-D VLA to function
   return 0; // indicates successful termination
} // end main

void print1DArray( int size, int array[ size ] )
{
   // output contents of array
   for ( int i = 0; i < size; i++ ) {
      printf( "array[%d] = %d\n", i, array[ i ] );
   } // end for
} // end function print1DArray

void print2DArray( int row, int col, int arr[ row ][ col ] )
{
   // output contents of array
   for ( int i = 0; i < row; i++ ) {
      for ( int j = 0; j < col; j++ ) {
         printf( "%5d", arr[ i ][ j ] );
      } // end for

      printf( "\n" );
   } // end for
} // end function print2DArray


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
 **************************************************************************/
