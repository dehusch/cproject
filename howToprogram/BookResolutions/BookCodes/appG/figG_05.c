// Fig. G.5: figG_05.c
// Declaring a variable in a for statement header in C99
#include <stdio.h>

int main( void )
{
   printf( "Values of x\n" );

   // declare a variable in a for statement header
   for ( int x = 1; x <= 5; x++ ) {
      printf( "%d\n", x );
   } // end for

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
