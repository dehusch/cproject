/* Fig. 7.11: fig07_11.c
   Printing a string one character at a time using
   a non-constant pointer to constant data */

#include <stdio.h>

void printCharacters( const char *sPtr );

int main( void )
{
   /* initialize char array */
   char string[] = "print characters of a string"; 

   printf( "The string is:\n" );
   printCharacters( string );
   printf( "\n" );
   return 0; /* indicates successful termination */
} /* end main */

/* sPtr cannot modify the character to which it points,
   i.e., sPtr is a "read-only" pointer */
void printCharacters( const char *sPtr )
{
   /* loop through entire string */
   for ( ; *sPtr != '\0'; sPtr++ ) { /* no initialization */
      printf( "%c", *sPtr );
   } /* end for */
} /* end function printCharacters */



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
