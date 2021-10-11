/* Program Challenge 8.08: Four String values to Four Double values */

#include <stdio.h>
#include <stdlib.h>


int main( void )            /* begin main function */
{
    
    /* double-type variables for converted floating-point strings */
    double string_1, string_2, string_3, string_4 ;
    
    double sum ;        /* variable to hold the sum of numbers */
    
    
    /* convert each floating-point value to a double type */
    string_1 = atof( "1.0" );  string_2 = atof( "2.0" );
    string_3 = atof( "3.0" );  string_4 = atof( "4.0" );
    
    /* add all double-type values */
    sum = string_1 + string_2 + string_3 + string_4 ;
    
    /* print total of values */
    printf( "\n\nThe sum of the floating-point "
            "values equals: %.3f \n\n", sum ) ;
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main */



/* =========================[ OBJECTIVE ]============================
    
    Program Challenge 8.08- Four String values to Four Double values:
    
    Write a program that inputs four strings that represent
    floating-point values, converts the strings to double values,
    sums the values, and prints the total of the four values.
    
*/
