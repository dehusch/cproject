// Fig. G.15: figG_15.c
// Using snprintf to print to a string safely
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ensure the same format string is used for both calls
#define DISPLAY_FORMAT "integer: %d\tfloat: %.2f"

int main( void )
{
   int x; // integer to be input
   float y; // float to be input

   printf( "Enter an integer and a float:\n" );
   scanf( "%d %f", &x, &y );

   // call snprintf to determine how much space we need
   int length = snprintf( NULL, 0, DISPLAY_FORMAT, x, y );
   int size = length + 1; // add one byte for terminating null character
   printf( "Creating a buffer of size: %d\n\n", size );
   char string[ size ]; // create VLA to print into

   // call with buffer to store formatted string
   length = snprintf( string, size, DISPLAY_FORMAT, x, y );

   // display results
   printf( "Return value: %d\n", length );
   printf( "String length: %d\n", ( int ) strlen( string ) );
   printf( "Formatted string:\n%s\n", string );
   return 0; // indicates successful termination
} // end main


 /*************************************************************************
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
