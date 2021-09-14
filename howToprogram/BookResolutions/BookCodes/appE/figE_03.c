/* Fig. E.3: figE_03.c
   Displaying a bitmap on the screen. */
#include <allegro.h>

int main( void )
{
    BITMAP *bmp; /* pointer to the bitmap */

    allegro_init(); /* initialize Allegro */
    install_keyboard(); /* allow Allegro to recieve keyboard input */
    set_color_depth( 16 ); /* set the color depth to 16-bit */
    set_gfx_mode( GFX_AUTODETECT, 640, 480, 0, 0 ); /* set graphics mode */
    bmp = load_bitmap( "picture.bmp", NULL ); /* load the bitmap file */
    blit( bmp, screen, 0, 0, 0, 0, bmp->w, bmp->h ); /* draw the bitmap */
    readkey(); /* wait for a keypress */
    destroy_bitmap( bmp ); /* free the memory allocated to bmp */
    return 0;
} /* end function main */
END_OF_MAIN() /* Allegro-specific macro */


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
