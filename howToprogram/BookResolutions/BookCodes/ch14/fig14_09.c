/* Fig. 14.9: fig14_09.c 
   Using goto */
#include <stdio.h>

int main( void )
{ 
   int count = 1; /* initialize count */

   start: /* label */

      if ( count > 10 ) {
         goto end;
      } /* end if */

      printf( "%d  ", count );
      count++;

      goto start; /* goto start on line 9 */

   end: /* label */
      putchar( '\n' );

   return 0; /* indicates successful termination */
} /* end main */

 

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