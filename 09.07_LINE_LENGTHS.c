/* Program Challenge 9.07: Line Lengths */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


int main( void )                /* begin main function */
{
    srand( time( NULL ) ) ;     /* seed random # generator */
    
    int array[ SIZE ] ;         /* 10 element array */
    
    
    /* fill array with random numbers between 1-1000 */
    for( int i = 0; i < 10; i++ ) {
        
        array[i] = ( rand() % 1000 + 1 ) ;
        
    }
    
    
    /* begin printing chart */
    printf( "\n\n" ) ;
    printf( "VALUE      |   TOTAL CHARACTERS \n" );
    
    
    int charLength;          /* saves character length */
    int previous = 0 ;      /* counter for previous value */
    
    /* print array values and total characters */
    for( int i = 0; i < 10; i++ ) {
        
        /* print value and save length */
        printf( "%d%n      |", array[i], &charLength );
        
        charLength += previous ; /* add previous length with current */
        
        printf( "       %d\n", charLength ) ; /* print length */
        
        previous = charLength ;     /* store total length */
        
    }
    
    printf( "\n\n" ) ;
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main */



/* =========================[ OBJECTIVE ]============================
    
    Program Challenge 9.07 - Line Lengths:
    
    Write a program that loads a 10-element array with random
    integers from 1 to 1000. For each value, print the value and a
    running total of the number of characters printed.
    
    Use the %n conversion specifier to determine the number of
    characters output for each value. Print the total number of
    characters output for all values up to and including the current
    value each time the current value is printed.
    
*/
